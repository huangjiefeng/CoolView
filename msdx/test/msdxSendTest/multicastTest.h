#pragma  once

#define HD_VIDEO_CAPTURE_DEVICE "Logitech HD Webcam C270"
#define  DEFAULT_VIDEO_CAPTRUE_DEVICE "USB2.0 UVC PC Camera"    //��Ƶ�����豸����
//#define HD_VIDEO_CAPTURE_DEVICE "e2eSoft VCam"
//#define  DEFAULT_VIDEO_CAPTRUE_DEVICE "e2eSoft VCam"    //��Ƶ�����豸����
#define USAGE "application name  -remote ip -camera name(��ѡ)"

void MulticastTestCase()
{
	const char * multicastAddr = "228.137.221.73";//Ŀ���ַ

	int result;
    result = msdx_initial();
    msdx_config_set_video_device(HD_VIDEO_CAPTURE_DEVICE, "", "");

	bool enableSmallVideo = true;
    result = msdx_create_send_graph(enableSmallVideo);
	assert(result==0);
	msdx_send_set_video_rtpstatcallback(NULL,printRtpStat);
	msdx_send_set_audio_rtpstatcallback(NULL,printRtpStat);
	result = msdx_set_send_video_vodec("H264", 1280,720 );
	//result = msdx_set_send_video_vodec("H264", 1280, 720);
	assert(result==0);
	result = msdx_set_send_audio_codec("SPEEX", 16000, 1, 16, false);
	assert(result==0);

	assert( msdx_connect_send_graph()==0);

	//����һ��һС��Ƶ
	result = msdx_add_send_address(multicastAddr, 8500, multicastAddr, 8600);
	result = msdx_add_send_address(multicastAddr, 8500, multicastAddr, 8700,true);
	assert(msdx_run_send_graph() ==0);
	
	//msdx_delete_send_address( remoteAddr2 , 8500, remoteAddr2, 8600 );

	getch();

	
	assert( msdx_stop_send_graph()==0);

	assert( msdx_destroy_send_graph()==0);

    msdx_uninitial();
}