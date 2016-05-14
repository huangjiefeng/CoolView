/* tx_soapStub.h
   Generated by gSOAP 2.8.21 from cvtx.h

Copyright(C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef tx_soapStub_H
#define tx_soapStub_H
#include <vector>
#ifndef WITH_NONAMESPACES
#define WITH_NONAMESPACES
#endif
#ifndef WITH_NOGLOBAL
#define WITH_NOGLOBAL
#endif
#include "stdsoap2.h"
#if GSOAP_VERSION != 20821
# error "GSOAP VERSION 20821 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


namespace tx_soap {

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_tx_soap_ns__DBConferenceNode
#define SOAP_TYPE_tx_soap_ns__DBConferenceNode (10)
/* ns:DBConferenceNode */
class SOAP_CMAC ns__DBConferenceNode
{
public:
	int cid;	/* required element of type xsd:int */
	std::string title;	/* required element of type xsd:string */
public:
	virtual int soap_type() const { return 10; } /* = unique type id SOAP_TYPE_tx_soap_ns__DBConferenceNode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__DBConferenceNode() { ns__DBConferenceNode::soap_default(NULL); }
	virtual ~ns__DBConferenceNode() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBConferenceResult
#define SOAP_TYPE_tx_soap_ns__QueryDBConferenceResult (11)
/* ns:QueryDBConferenceResult */
class SOAP_CMAC ns__QueryDBConferenceResult
{
public:
	int total;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
	int offset;	/* required element of type xsd:int */
	std::vector<ns__DBConferenceNode >conferences;	/* optional element of type ns:DBConferenceNode */
public:
	virtual int soap_type() const { return 11; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBConferenceResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__QueryDBConferenceResult() { ns__QueryDBConferenceResult::soap_default(NULL); }
	virtual ~ns__QueryDBConferenceResult() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__DBTerminalNode
#define SOAP_TYPE_tx_soap_ns__DBTerminalNode (13)
/* ns:DBTerminalNode */
class SOAP_CMAC ns__DBTerminalNode
{
public:
	std::string uri;	/* required element of type xsd:string */
	std::string name;	/* required element of type xsd:string */
public:
	virtual int soap_type() const { return 13; } /* = unique type id SOAP_TYPE_tx_soap_ns__DBTerminalNode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__DBTerminalNode() { ns__DBTerminalNode::soap_default(NULL); }
	virtual ~ns__DBTerminalNode() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBTerminalResult
#define SOAP_TYPE_tx_soap_ns__QueryDBTerminalResult (14)
/* ns:QueryDBTerminalResult */
class SOAP_CMAC ns__QueryDBTerminalResult
{
public:
	std::vector<ns__DBTerminalNode >terminals;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns:DBTerminalNode */
public:
	virtual int soap_type() const { return 14; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBTerminalResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__QueryDBTerminalResult() { ns__QueryDBTerminalResult::soap_default(NULL); }
	virtual ~ns__QueryDBTerminalResult() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBEpisodeDatesResult
#define SOAP_TYPE_tx_soap_ns__QueryDBEpisodeDatesResult (16)
/* ns:QueryDBEpisodeDatesResult */
class SOAP_CMAC ns__QueryDBEpisodeDatesResult
{
public:
	std::vector<short >dates;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:short */
public:
	virtual int soap_type() const { return 16; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBEpisodeDatesResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__QueryDBEpisodeDatesResult() { ns__QueryDBEpisodeDatesResult::soap_default(NULL); }
	virtual ~ns__QueryDBEpisodeDatesResult() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__DBEpisodeNode
#define SOAP_TYPE_tx_soap_ns__DBEpisodeNode (19)
/* ns:DBEpisodeNode */
class SOAP_CMAC ns__DBEpisodeNode
{
public:
	LONG64 id;	/* required element of type xsd:long */
	std::string terminal_uri;	/* required element of type xsd:string */
	std::string title;	/* required element of type xsd:string */
	std::string requester;	/* required element of type xsd:string */
	LONG64 start_time;	/* required element of type xsd:long */
	LONG64 duration;	/* required element of type xsd:long */
	std::string participants;	/* required element of type xsd:string */
	std::string keywords;	/* required element of type xsd:string */
	std::string description;	/* required element of type xsd:string */
public:
	virtual int soap_type() const { return 19; } /* = unique type id SOAP_TYPE_tx_soap_ns__DBEpisodeNode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__DBEpisodeNode() { ns__DBEpisodeNode::soap_default(NULL); }
	virtual ~ns__DBEpisodeNode() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBEpisodeResult
#define SOAP_TYPE_tx_soap_ns__QueryDBEpisodeResult (22)
/* ns:QueryDBEpisodeResult */
class SOAP_CMAC ns__QueryDBEpisodeResult
{
public:
	int total;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
	int offset;	/* required element of type xsd:int */
	std::vector<ns__DBEpisodeNode >episodes;	/* optional element of type ns:DBEpisodeNode */
public:
	virtual int soap_type() const { return 22; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBEpisodeResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__QueryDBEpisodeResult() { ns__QueryDBEpisodeResult::soap_default(NULL); }
	virtual ~ns__QueryDBEpisodeResult() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBEpisodeByTimeResult
#define SOAP_TYPE_tx_soap_ns__QueryDBEpisodeByTimeResult (24)
/* ns:QueryDBEpisodeByTimeResult */
class SOAP_CMAC ns__QueryDBEpisodeByTimeResult
{
public:
	LONG64 start;	/* required element of type xsd:long */
	LONG64 end;	/* required element of type xsd:long */
	std::vector<ns__DBEpisodeNode >episodes;	/* optional element of type ns:DBEpisodeNode */
public:
	virtual int soap_type() const { return 24; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBEpisodeByTimeResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__QueryDBEpisodeByTimeResult() { ns__QueryDBEpisodeByTimeResult::soap_default(NULL); }
	virtual ~ns__QueryDBEpisodeByTimeResult() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__DBViewNode
#define SOAP_TYPE_tx_soap_ns__DBViewNode (25)
/* ns:DBViewNode */
class SOAP_CMAC ns__DBViewNode
{
public:
	int id;	/* required element of type xsd:int */
	short camera_index;	/* required element of type xsd:short */
	LONG64 start_time;	/* required element of type xsd:long */
	LONG64 duration;	/* required element of type xsd:long */
	std::string format;	/* required element of type xsd:string */
	std::string file_path;	/* required element of type xsd:string */
	int status;	/* required element of type xsd:int */
public:
	virtual int soap_type() const { return 25; } /* = unique type id SOAP_TYPE_tx_soap_ns__DBViewNode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__DBViewNode() { ns__DBViewNode::soap_default(NULL); }
	virtual ~ns__DBViewNode() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBViewResult
#define SOAP_TYPE_tx_soap_ns__QueryDBViewResult (26)
/* ns:QueryDBViewResult */
class SOAP_CMAC ns__QueryDBViewResult
{
public:
	std::vector<ns__DBViewNode >views;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns:DBViewNode */
public:
	virtual int soap_type() const { return 26; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBViewResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__QueryDBViewResult() { ns__QueryDBViewResult::soap_default(NULL); }
	virtual ~ns__QueryDBViewResult() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBConference
#define SOAP_TYPE_tx_soap_ns__QueryDBConference (30)
/* ns:QueryDBConference */
struct ns__QueryDBConference
{
public:
	int offset;	/* required element of type xsd:int */
	int count;	/* required element of type xsd:int */
public:
	int soap_type() const { return 30; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBConference */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBTerminal
#define SOAP_TYPE_tx_soap_ns__QueryDBTerminal (33)
/* ns:QueryDBTerminal */
struct ns__QueryDBTerminal
{
public:
	int cid;	/* required element of type xsd:int */
public:
	int soap_type() const { return 33; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBTerminal */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBEpisodeDates
#define SOAP_TYPE_tx_soap_ns__QueryDBEpisodeDates (36)
/* ns:QueryDBEpisodeDates */
struct ns__QueryDBEpisodeDates
{
public:
	int cid;	/* required element of type xsd:int */
	std::string uri;	/* required element of type xsd:string */
public:
	int soap_type() const { return 36; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBEpisodeDates */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBEpisode
#define SOAP_TYPE_tx_soap_ns__QueryDBEpisode (39)
/* ns:QueryDBEpisode */
struct ns__QueryDBEpisode
{
public:
	int cid;	/* required element of type xsd:int */
	std::string uri;	/* required element of type xsd:string */
	int offset;	/* required element of type xsd:int */
	int count;	/* required element of type xsd:int */
public:
	int soap_type() const { return 39; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBEpisode */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBEpisodeByTime
#define SOAP_TYPE_tx_soap_ns__QueryDBEpisodeByTime (41)
/* ns:QueryDBEpisodeByTime */
struct ns__QueryDBEpisodeByTime
{
public:
	int cid;	/* required element of type xsd:int */
	std::string uri;	/* required element of type xsd:string */
	LONG64 start;	/* required element of type xsd:long */
	LONG64 end;	/* required element of type xsd:long */
public:
	int soap_type() const { return 41; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBEpisodeByTime */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__QueryDBView
#define SOAP_TYPE_tx_soap_ns__QueryDBView (44)
/* ns:QueryDBView */
struct ns__QueryDBView
{
public:
	LONG64 eid;	/* required element of type xsd:long */
public:
	int soap_type() const { return 44; } /* = unique type id SOAP_TYPE_tx_soap_ns__QueryDBView */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__StartRecordParam
#define SOAP_TYPE_tx_soap_ns__StartRecordParam (45)
/* ns:StartRecordParam */
class SOAP_CMAC ns__StartRecordParam
{
public:
	std::string focus;	/* required element of type xsd:string */
	std::string requester_uri;	/* required element of type xsd:string */
	std::string target_uri;	/* required element of type xsd:string */
	std::string title;	/* required element of type xsd:string */
	std::string participants;	/* required element of type xsd:string */
	std::string keywords;	/* required element of type xsd:string */
	std::string description;	/* required element of type xsd:string */
public:
	virtual int soap_type() const { return 45; } /* = unique type id SOAP_TYPE_tx_soap_ns__StartRecordParam */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__StartRecordParam() { ns__StartRecordParam::soap_default(NULL); }
	virtual ~ns__StartRecordParam() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__StopRecordParam
#define SOAP_TYPE_tx_soap_ns__StopRecordParam (46)
/* ns:StopRecordParam */
class SOAP_CMAC ns__StopRecordParam
{
public:
	std::string focus;	/* required element of type xsd:string */
	std::string target_uri;	/* required element of type xsd:string */
public:
	virtual int soap_type() const { return 46; } /* = unique type id SOAP_TYPE_tx_soap_ns__StopRecordParam */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__StopRecordParam() { ns__StopRecordParam::soap_default(NULL); }
	virtual ~ns__StopRecordParam() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__RecordTerminalStatus
#define SOAP_TYPE_tx_soap_ns__RecordTerminalStatus (47)
/* ns:RecordTerminalStatus */
class SOAP_CMAC ns__RecordTerminalStatus
{
public:
	std::string vuri;	/* required element of type xsd:string */
	std::string name;	/* required element of type xsd:string */
	std::string status;	/* required element of type xsd:string */
	int virtual_count;	/* required element of type xsd:int */
	std::string requester_uri;	/* required element of type xsd:string */
	unsigned int duration;	/* required element of type xsd:unsignedInt */
	ULONG64 recorded_bytes;	/* required element of type xsd:unsignedLong */
public:
	virtual int soap_type() const { return 47; } /* = unique type id SOAP_TYPE_tx_soap_ns__RecordTerminalStatus */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__RecordTerminalStatus() { ns__RecordTerminalStatus::soap_default(NULL); }
	virtual ~ns__RecordTerminalStatus() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__GetRecordStatusResult
#define SOAP_TYPE_tx_soap_ns__GetRecordStatusResult (50)
/* ns:GetRecordStatusResult */
class SOAP_CMAC ns__GetRecordStatusResult
{
public:
	std::vector<ns__RecordTerminalStatus >terminals;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns:RecordTerminalStatus */
public:
	virtual int soap_type() const { return 50; } /* = unique type id SOAP_TYPE_tx_soap_ns__GetRecordStatusResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns__GetRecordStatusResult() { ns__GetRecordStatusResult::soap_default(NULL); }
	virtual ~ns__GetRecordStatusResult() { }
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__StartRecordResponse
#define SOAP_TYPE_tx_soap_ns__StartRecordResponse (54)
/* ns:StartRecordResponse */
struct ns__StartRecordResponse
{
public:
	int *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:int */
public:
	int soap_type() const { return 54; } /* = unique type id SOAP_TYPE_tx_soap_ns__StartRecordResponse */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__StartRecord
#define SOAP_TYPE_tx_soap_ns__StartRecord (55)
/* ns:StartRecord */
struct ns__StartRecord
{
public:
	ns__StartRecordParam param;	/* required element of type ns:StartRecordParam */
public:
	int soap_type() const { return 55; } /* = unique type id SOAP_TYPE_tx_soap_ns__StartRecord */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__StopRecordResponse
#define SOAP_TYPE_tx_soap_ns__StopRecordResponse (57)
/* ns:StopRecordResponse */
struct ns__StopRecordResponse
{
public:
	int *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:int */
public:
	int soap_type() const { return 57; } /* = unique type id SOAP_TYPE_tx_soap_ns__StopRecordResponse */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__StopRecord
#define SOAP_TYPE_tx_soap_ns__StopRecord (58)
/* ns:StopRecord */
struct ns__StopRecord
{
public:
	ns__StopRecordParam param;	/* required element of type ns:StopRecordParam */
public:
	int soap_type() const { return 58; } /* = unique type id SOAP_TYPE_tx_soap_ns__StopRecord */
};
#endif

#ifndef SOAP_TYPE_tx_soap_ns__GetRecordStatus
#define SOAP_TYPE_tx_soap_ns__GetRecordStatus (61)
/* ns:GetRecordStatus */
struct ns__GetRecordStatus
{
public:
	std::string focus;	/* required element of type xsd:string */
	std::string uri;	/* required element of type xsd:string */
public:
	int soap_type() const { return 61; } /* = unique type id SOAP_TYPE_tx_soap_ns__GetRecordStatus */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_tx_soap_SOAP_ENV__Header
#define SOAP_TYPE_tx_soap_SOAP_ENV__Header (62)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 62; } /* = unique type id SOAP_TYPE_tx_soap_SOAP_ENV__Header */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_tx_soap_SOAP_ENV__Code
#define SOAP_TYPE_tx_soap_SOAP_ENV__Code (63)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
public:
	int soap_type() const { return 63; } /* = unique type id SOAP_TYPE_tx_soap_SOAP_ENV__Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_tx_soap_SOAP_ENV__Detail
#define SOAP_TYPE_tx_soap_SOAP_ENV__Detail (65)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
public:
	int soap_type() const { return 65; } /* = unique type id SOAP_TYPE_tx_soap_SOAP_ENV__Detail */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_tx_soap_SOAP_ENV__Reason
#define SOAP_TYPE_tx_soap_SOAP_ENV__Reason (68)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 68; } /* = unique type id SOAP_TYPE_tx_soap_SOAP_ENV__Reason */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_tx_soap_SOAP_ENV__Fault
#define SOAP_TYPE_tx_soap_SOAP_ENV__Fault (69)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
public:
	int soap_type() const { return 69; } /* = unique type id SOAP_TYPE_tx_soap_SOAP_ENV__Fault */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE_tx_soap__QName
#define SOAP_TYPE_tx_soap__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE_tx_soap__XML
#define SOAP_TYPE_tx_soap__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE_tx_soap_xsd__string
#define SOAP_TYPE_tx_soap_xsd__string (9)
typedef std::string xsd__string;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


} // namespace tx_soap


#endif

/* End of tx_soapStub.h */