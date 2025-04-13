#ifndef	_mach_exc_server_
#define	_mach_exc_server_

/* Module mach_exc */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN MIG_STRNCPY_ZEROFILL CODE */

#if defined(__has_include)
#if __has_include(<mach/mig_strncpy_zerofill_support.h>)
#ifndef USING_MIG_STRNCPY_ZEROFILL
#define USING_MIG_STRNCPY_ZEROFILL
#endif
#ifndef __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
#ifndef __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS_CSTRING_ATTR
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS_CSTRING_COUNTEDBY_ATTR(C) __unsafe_indexable
#endif
	extern int mig_strncpy_zerofill(char * dest, const char * src, int len) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif /* __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ */
#endif /* __has_include(<mach/mig_strncpy_zerofill_support.h>) */
#endif /* __has_include */
	
/* END MIG_STRNCPY_ZEROFILL CODE */


#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            * name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	mach_exc_MSG_COUNT
#define	mach_exc_MSG_COUNT	6
#endif	/* mach_exc_MSG_COUNT */

#include <Availability.h>
#include <mach/std_types.h>
#include <mach/mig.h>
#include <ipc/ipc_voucher.h>
#include <kern/ipc_kobject.h>
#include <kern/ipc_tt.h>
#include <kern/ipc_host.h>
#include <kern/ledger.h>
#include <kern/processor.h>
#include <kern/sync_sema.h>
#include <ipc/ipc_eventlink.h>
#include <vm/memory_object.h>
#include <vm/vm_map.h>
#include <kern/arcade.h>
#include <kern/ipc_mig.h>
#include <kern/task_ident.h>
#include <kern/kern_cdata.h>
#include <mach/mig.h>
#include <mach/mach_types.h>

#ifdef __BeforeMigServerHeader
__BeforeMigServerHeader
#endif /* __BeforeMigServerHeader */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif


/* Routine mach_exception_raise */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t catch_mach_exception_raise
(
	mach_port_t exception_port,
	mach_port_t thread,
	mach_port_t task,
	exception_type_t exception,
	mach_exception_data_t code,
	mach_msg_type_number_t codeCnt
);

/* Routine mach_exception_raise_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t catch_mach_exception_raise_state
(
	mach_port_t exception_port,
	exception_type_t exception,
	const mach_exception_data_t code,
	mach_msg_type_number_t codeCnt,
	int *flavor,
	const thread_state_t old_state,
	mach_msg_type_number_t old_stateCnt,
	thread_state_t new_state,
	mach_msg_type_number_t *new_stateCnt
);

/* Routine mach_exception_raise_state_identity */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t catch_mach_exception_raise_state_identity
(
	mach_port_t exception_port,
	mach_port_t thread,
	mach_port_t task,
	exception_type_t exception,
	mach_exception_data_t code,
	mach_msg_type_number_t codeCnt,
	int *flavor,
	thread_state_t old_state,
	mach_msg_type_number_t old_stateCnt,
	thread_state_t new_state,
	mach_msg_type_number_t *new_stateCnt
);

/* Routine mach_exception_raise_identity_protected */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t catch_mach_exception_raise_identity_protected
(
	mach_port_t exception_port,
	uint64_t thread_id,
	mach_port_t task_id_token_t,
	exception_type_t exception,
	mach_exception_data_t code,
	mach_msg_type_number_t codeCnt
);

/* Routine mach_exception_raise_backtrace */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t catch_mach_exception_raise_backtrace
(
	mach_port_t exception_port,
	mach_port_t kcdata_object_t,
	exception_type_t exception,
	mach_exception_data_t code,
	mach_msg_type_number_t codeCnt
);

/* Routine mach_exception_raise_state_identity_protected */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t catch_mach_exception_raise_state_identity_protected
(
	mach_port_t exception_port,
	uint64_t thread_id,
	mach_port_t task_id_token_t,
	exception_type_t exception,
	mach_exception_data_t code,
	mach_msg_type_number_t codeCnt,
	int *flavor,
	thread_state_t old_state,
	mach_msg_type_number_t old_stateCnt,
	thread_state_t new_state,
	mach_msg_type_number_t *new_stateCnt
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t mach_exc_server(
		mach_msg_header_t *InHeadP,
		void *InDataP,
		mach_msg_max_trailer_t *InTrailerP,
		mach_msg_header_t *OutHeadP,
		void *OutDataP);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
mig_kern_routine_t mach_exc_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this kernel subsystem, for use in direct RPC */
extern const struct catch_mach_exc_subsystem {
	mig_kern_server_routine_t	kserver;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct kern_routine_descriptor	/* Array of routine descriptors */
		kroutine[6];
} catch_mach_exc_subsystem;

/* typedefs for all requests */

#ifndef __Request__mach_exc_subsystem__defined
#define __Request__mach_exc_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t thread;
		mach_msg_port_descriptor_t task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
	} __Request__mach_exception_raise_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t thread;
		mach_msg_port_descriptor_t task;
	} __RequestKData__mach_exception_raise_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__mach_exception_raise_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[1296];
	} __Request__mach_exception_raise_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__mach_exception_raise_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[1296];
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__mach_exception_raise_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t thread;
		mach_msg_port_descriptor_t task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[1296];
	} __Request__mach_exception_raise_state_identity_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t thread;
		mach_msg_port_descriptor_t task;
	} __RequestKData__mach_exception_raise_state_identity_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[1296];
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__mach_exception_raise_state_identity_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t task_id_token_t;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t thread_id;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
	} __Request__mach_exception_raise_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t task_id_token_t;
	} __RequestKData__mach_exception_raise_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		uint64_t thread_id;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__mach_exception_raise_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t kcdata_object_t;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
	} __Request__mach_exception_raise_backtrace_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t kcdata_object_t;
	} __RequestKData__mach_exception_raise_backtrace_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__mach_exception_raise_backtrace_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t task_id_token_t;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t thread_id;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[1296];
	} __Request__mach_exception_raise_state_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t task_id_token_t;
	} __RequestKData__mach_exception_raise_state_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		uint64_t thread_id;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[1296];
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__mach_exception_raise_state_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Request__mach_exc_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion__catch_mach_exc_subsystem__defined
#define __RequestUnion__catch_mach_exc_subsystem__defined
union __RequestUnion__catch_mach_exc_subsystem {
	__Request__mach_exception_raise_t Request_mach_exception_raise;
	__Request__mach_exception_raise_state_t Request_mach_exception_raise_state;
	__Request__mach_exception_raise_state_identity_t Request_mach_exception_raise_state_identity;
	__Request__mach_exception_raise_identity_protected_t Request_mach_exception_raise_identity_protected;
	__Request__mach_exception_raise_backtrace_t Request_mach_exception_raise_backtrace;
	__Request__mach_exception_raise_state_identity_protected_t Request_mach_exception_raise_state_identity_protected;
};
#endif /* __RequestUnion__catch_mach_exc_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__mach_exc_subsystem__defined
#define __Reply__mach_exc_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_exception_raise_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__mach_exception_raise_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		kern_return_t RetCode;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__mach_exception_raise_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[1296];
	} __Reply__mach_exception_raise_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__mach_exception_raise_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		kern_return_t RetCode;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[1296];
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__mach_exception_raise_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[1296];
	} __Reply__mach_exception_raise_state_identity_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__mach_exception_raise_state_identity_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		kern_return_t RetCode;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[1296];
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__mach_exception_raise_state_identity_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_exception_raise_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__mach_exception_raise_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		kern_return_t RetCode;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__mach_exception_raise_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_exception_raise_backtrace_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__mach_exception_raise_backtrace_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		kern_return_t RetCode;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__mach_exception_raise_backtrace_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[1296];
	} __Reply__mach_exception_raise_state_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__mach_exception_raise_state_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		kern_return_t RetCode;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[1296];
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__mach_exception_raise_state_identity_protected_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Reply__mach_exc_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__catch_mach_exc_subsystem__defined
#define __ReplyUnion__catch_mach_exc_subsystem__defined
union __ReplyUnion__catch_mach_exc_subsystem {
	__Reply__mach_exception_raise_t Reply_mach_exception_raise;
	__Reply__mach_exception_raise_state_t Reply_mach_exception_raise_state;
	__Reply__mach_exception_raise_state_identity_t Reply_mach_exception_raise_state_identity;
	__Reply__mach_exception_raise_identity_protected_t Reply_mach_exception_raise_identity_protected;
	__Reply__mach_exception_raise_backtrace_t Reply_mach_exception_raise_backtrace;
	__Reply__mach_exception_raise_state_identity_protected_t Reply_mach_exception_raise_state_identity_protected;
};
#endif /* __ReplyUnion__catch_mach_exc_subsystem__defined */

#ifndef subsystem_to_name_map_mach_exc
#define subsystem_to_name_map_mach_exc \
    { "mach_exception_raise", 2405 },\
    { "mach_exception_raise_state", 2406 },\
    { "mach_exception_raise_state_identity", 2407 },\
    { "mach_exception_raise_identity_protected", 2408 },\
    { "mach_exception_raise_backtrace", 2409 },\
    { "mach_exception_raise_state_identity_protected", 2410 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _mach_exc_server_ */
