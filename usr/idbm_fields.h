#ifndef IDBM_FIELDS_H
#define IDBM_FIELDS_H

#include "version.h"

#define ISCSI_BEGIN_REC	"# BEGIN RECORD "ISCSI_VERSION_STR
#define ISCSI_END_REC	"# END RECORD"

/* node fields */
#define NODE_NAME	"node.name"
#define NODE_TPGT	"node.tpgt"
#define NODE_STARTUP	"node.startup"
#define NODE_DISC_ADDR	"node.discovery_address"
#define NODE_DISC_PORT	"node.discovery_port"
#define NODE_DISC_TYPE	"node.discovery_type"
#define NODE_BOOT_LUN	"node.boot_lun"

/* session fields */
#define SESSION_INIT_CMDSN	"node.session.initial_cmdsn"
#define SESSION_INIT_LOGIN_RETRY "node.session.initial_login_retry_max"
#define SESSION_CMDS_MAX	"node.session.cmds_max"
#define SESSION_QDEPTH		"node.session.queue_depth"
#define SESSION_AUTH_METHOD	"node.session.auth.authmethod"
#define SESSION_USERNAME	"node.session.auth.username"
#define SESSION_PASSWORD	"node.session.auth.password"
#define SESSION_PASSWORD_LEN	"node.session.auth.password_length"
#define SESSION_USERNAME_IN	"node.session.auth.username_in"
#define SESSION_PASSWORD_IN	"node.session.auth.password_in"
#define SESSION_PASSWORD_IN_LEN	"node.session.auth.password_in_length"
#define SESSION_REPLACEMENT_TMO	"node.session.timeo.replacement_timeout"
#define SESSION_ABORT_TMO	"node.session.err_timeo.abort_timeout"
#define SESSION_LU_RESET_TMO	"node.session.err_timeo.lu_reset_timeout"
#define SESSION_HOST_RESET_TMO	"node.session.err_timeo.host_reset_timeout"
#define SESSION_FAST_ABORT	"node.session.iscsi.FastAbort"
#define SESSION_INITIAL_R2T	"node.session.iscsi.InitialR2T"
#define SESSION_IMM_DATA	"node.session.iscsi.ImmediateData"
#define SESSION_FIRST_BURST	"node.session.iscsi.FirstBurstLength"
#define SESSION_MAX_BURST	"node.session.iscsi.MaxBurstLength"
#define SESSION_DEF_TIME2RETAIN	"node.session.iscsi.DefaultTime2Retain"
#define SESSION_DEF_TIME2WAIT	"node.session.iscsi.DefaultTime2Wait"
#define SESSION_MAX_CONNS	"node.session.iscsi.MaxConnections"
#define SESSION_MAX_R2T		"node.session.iscsi.MaxOutstandingR2T"
#define SESSION_ERL		"node.session.iscsi.ERL"

/* connections fields */
#define CONN_ADDR		"node.conn[%d].address"
#define CONN_PORT		"node.conn[%d].port"
#define CONN_STARTUP		"node.conn[%d].startup"
#define CONN_WINDOW_SIZE	"node.conn[%d].tcp.window_size"
#define CONN_SERVICE_TYPE	"node.conn[%d].tcp.type_of_service"
#define CONN_LOGOUT_TMO		"node.conn[%d].timeo.logout_timeout"
#define CONN_LOGIN_TMO		"node.conn[%d].timeo.login_timeout"
#define CONN_AUTH_TMO		"node.conn[%d].timeo.auth_timeout"
#define CONN_NOP_INT		"node.conn[%d].timeo.noop_out_interval"
#define CONN_NOP_TMO		"node.conn[%d].timeo.noop_out_timeout"
#define CONN_MAX_RECV_DLEN	"node.conn[%d].iscsi.MaxRecvDataSegmentLength"
#define CONN_HDR_DIGEST		"node.conn[%d].iscsi.HeaderDigest"
#define CONN_DATA_DIGEST	"node.conn[%d].iscsi.DataDigest"
#define CONN_IFMARKER		"node.conn[%d].iscsi.IFMarker"
#define CONN_OFMARKER		"node.conn[%d].iscsi.OFMarker"

/* iface fields */
#define IFACE_HWADDR		"iface.hwaddress"
#define IFACE_ISCSINAME		"iface.iscsi_ifacename"
#define IFACE_NETNAME		"iface.net_ifacename"
#define IFACE_TRANSPORTNAME	"iface.transport_name"
#define IFACE_INAME		"iface.initiatorname"
#define IFACE_ISID		"iface.isid"
#define IFACE_BOOT_PROTO	"iface.bootproto"
#define IFACE_IPADDR		"iface.ipaddress"
#define IFACE_SUBNET_MASK	"iface.subnet_mask"
#define IFACE_GATEWAY		"iface.gateway"
#define IFACE_PRIMARY_DNS	"iface.primary_dns"
#define IFACE_SEC_DNS		"iface.secondary_dns"
#define IFACE_VLAN		"iface.vlan"

/* discovery fields */
#define DISC_STARTUP		"discovery.startup"
#define DISC_TYPE		"discovery.type"
/* sendtargets */
#define DISC_ST_ADDR		"discovery.sendtargets.address"
#define DISC_ST_PORT		"discovery.sendtargets.port"
#define DISC_ST_AUTH_METHOD	"discovery.sendtargets.auth.authmethod"
#define DISC_ST_USERNAME	"discovery.sendtargets.auth.username"
#define DISC_ST_PASSWORD	"discovery.sendtargets.auth.password"
#define DISC_ST_USERNAME_IN	"discovery.sendtargets.auth.username_in"
#define DISC_ST_PASSWORD_IN	"discovery.sendtargets.auth.password_in"
#define DISC_ST_LOGIN_TMO	"discovery.sendtargets.timeo.login_timeout"
#define DISC_ST_REOPEN_MAX	"discovery.sendtargets.reopen_max"
#define DISC_ST_AUTH_TMO	"discovery.sendtargets.timeo.auth_timeout"
#define DISC_ST_ACTIVE_TMO	"discovery.sendtargets.timeo.active_timeout"
#define DISC_ST_MAX_RECV_DLEN	"discovery.sendtargets.iscsi.MaxRecvDataSegmentLength"

#endif