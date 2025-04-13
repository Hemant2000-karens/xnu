#ifndef	_map_server_
#define	_map_server_

/* Module map */

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

#ifndef	map_MSG_COUNT
#define	map_MSG_COUNT	32
#endif	/* map_MSG_COUNT */

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
#include <mach_debug/mach_debug_types.h>

#ifdef __BeforeMigServerHeader
__BeforeMigServerHeader
#endif /* __BeforeMigServerHeader */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif


/* Routine region */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_region
(
	vm_map_read_t target_task,
	vm32_address_t *address,
	vm32_size_t *size,
	vm_region_flavor_t flavor,
	vm_region_info_t info,
	mach_msg_type_number_t *infoCnt,
	mach_port_t *object_name
);

/* Routine allocate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_allocate
(
	vm_map_t target_task,
	vm32_address_ut *address,
	vm32_size_ut size,
	int flags
);

/* Routine deallocate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_deallocate
(
	vm_map_t target_task,
	vm32_address_ut address,
	vm32_size_ut size
);

/* Routine protect */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_protect
(
	vm_map_t target_task,
	vm32_address_t address,
	vm32_size_t size,
	boolean_t set_maximum,
	vm_prot_t new_protection
);

/* Routine inherit */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_inherit
(
	vm_map_t target_task,
	vm32_address_t address,
	vm32_size_t size,
	vm_inherit_t new_inheritance
);

/* Routine read */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_read
(
	vm_map_read_t target_task,
	vm32_address_ut address,
	vm32_size_ut size,
	vm_offset_t *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine read_list */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_read_list
(
	vm_map_read_t target_task,
	vm32_read_entry_t data_list,
	natural_t count
);

/* Routine write */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_write
(
	vm_map_t target_task,
	vm32_address_ut address,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt
);

/* Routine copy */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_copy
(
	vm_map_t target_task,
	vm32_address_ut source_address,
	vm32_size_ut size,
	vm32_address_ut dest_address
);

/* Routine read_overwrite */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_read_overwrite
(
	vm_map_read_t target_task,
	vm32_address_ut address,
	vm32_size_ut size,
	vm32_address_ut data,
	vm32_size_ut *outsize
);

/* Routine msync */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_msync
(
	vm_map_t target_task,
	vm32_address_t address,
	vm32_size_t size,
	vm_sync_t sync_flags
);

/* Routine behavior_set */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_behavior_set
(
	vm_map_t target_task,
	vm32_address_t address,
	vm32_size_t size,
	vm_behavior_t new_behavior
);

/* Routine map */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_map
(
	vm_map_t target_task,
	vm32_address_ut *address,
	vm32_size_ut size,
	vm32_address_ut mask,
	int flags,
	mem_entry_name_port_t object,
	vm32_offset_ut offset,
	boolean_t copy,
	vm_prot_ut cur_protection,
	vm_prot_ut max_protection,
	vm_inherit_ut inheritance
);

/* Routine machine_attribute */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_machine_attribute
(
	vm_map_t target_task,
	vm32_address_t address,
	vm32_size_t size,
	vm_machine_attribute_t attribute,
	vm_machine_attribute_val_t *value
);

/* Routine remap */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_remap
(
	vm_map_t target_task,
	vm32_address_ut *target_address,
	vm32_size_ut size,
	vm32_address_ut mask,
	boolean_t anywhere,
	vm_map_t src_task,
	vm32_address_ut src_address,
	boolean_t copy,
	vm_prot_ut *cur_protection,
	vm_prot_ut *max_protection,
	vm_inherit_ut inheritance
);

/* Routine _task_wire */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32__task_wire
(
	vm_map_t target_task,
	boolean_t must_wire
);

/* Routine make_memory_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_make_memory_entry
(
	vm_map_t target_task,
	vm32_size_ut *size,
	vm32_offset_ut offset,
	vm_prot_ut permission,
	mem_entry_name_port_t *object_handle,
	mem_entry_name_port_t parent_entry
);

/* Routine map_page_query */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_map_page_query
(
	vm_map_read_t target_map,
	vm32_offset_t offset,
	integer_t *disposition,
	integer_t *ref_count
);

/* Routine region_info */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_region_info
(
	vm_map_read_t task,
	vm32_address_t address,
	vm_info_region_t *region,
	vm_info_object_array_t *objects,
	mach_msg_type_number_t *objectsCnt
);

/* Routine mapped_pages_info */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_mapped_pages_info
(
	vm_map_read_t task,
	page_address_array_t *pages,
	mach_msg_type_number_t *pagesCnt
);

/* Routine region_recurse */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_region_recurse
(
	vm_map_read_t target_task,
	vm32_address_t *address,
	vm32_size_t *size,
	natural_t *nesting_depth,
	vm_region_recurse_info_t info,
	mach_msg_type_number_t *infoCnt
);

/* Routine region_recurse_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_region_recurse_64
(
	vm_map_read_t target_task,
	vm32_address_t *address,
	vm32_size_t *size,
	natural_t *nesting_depth,
	vm_region_recurse_info_t info,
	mach_msg_type_number_t *infoCnt
);

/* Routine region_info_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_region_info_64
(
	vm_map_read_t task,
	vm32_address_t address,
	vm_info_region_64_t *region,
	vm_info_object_array_t *objects,
	mach_msg_type_number_t *objectsCnt
);

/* Routine region_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_region_64
(
	vm_map_read_t target_task,
	vm32_address_t *address,
	vm32_size_t *size,
	vm_region_flavor_t flavor,
	vm_region_info_t info,
	mach_msg_type_number_t *infoCnt,
	mach_port_t *object_name
);

/* Routine make_memory_entry_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_make_memory_entry_64
(
	vm_map_t target_task,
	memory_object_size_ut *size,
	memory_object_offset_ut offset,
	vm_prot_ut permission,
	mach_port_t *object_handle,
	mem_entry_name_port_t parent_entry
);

/* Routine map_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_map_64
(
	vm_map_t target_task,
	vm32_address_ut *address,
	vm32_size_ut size,
	vm32_address_ut mask,
	int flags,
	mem_entry_name_port_t object,
	memory_object_offset_ut offset,
	boolean_t copy,
	vm_prot_ut cur_protection,
	vm_prot_ut max_protection,
	vm_inherit_ut inheritance
);

/* Routine purgable_control */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32_purgable_control
(
	vm_map_t target_task,
	vm32_address_t address,
	vm_purgable_t control,
	int *state
);

/* Routine _map_exec_lockdown */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t vm32__map_exec_lockdown
(
	vm_map_t target_task
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t map_server(
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
mig_kern_routine_t map_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this kernel subsystem, for use in direct RPC */
extern const struct vm32_map_subsystem {
	mig_kern_server_routine_t	kserver;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct kern_routine_descriptor	/* Array of routine descriptors */
		kroutine[32];
} vm32_map_subsystem;

/* typedefs for all requests */

#ifndef __Request__map_subsystem__defined
#define __Request__map_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm_region_flavor_t flavor;
		mach_msg_type_number_t infoCnt;
	} __Request__region_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__region_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm_region_flavor_t flavor;
		mach_msg_type_number_t infoCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__region_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		int flags;
	} __Request__allocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__allocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		int flags;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__allocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
	} __Request__deallocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__deallocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__deallocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		boolean_t set_maximum;
		vm_prot_t new_protection;
	} __Request__protect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__protect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		boolean_t set_maximum;
		vm_prot_t new_protection;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__protect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_inherit_t new_inheritance;
	} __Request__inherit_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__inherit_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_inherit_t new_inheritance;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__inherit_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
	} __Request__read_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__read_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__read_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_read_entry_t data_list;
		natural_t count;
	} __Request__read_list_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__read_list_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_read_entry_t data_list;
		natural_t count;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__read_list_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_address_ut address;
		mach_msg_type_number_t dataCnt;
	} __Request__write_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t data;
	} __RequestKData__write_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut address;
		mach_msg_type_number_t dataCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__write_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_ut source_address;
		vm32_size_ut size;
		vm32_address_ut dest_address;
	} __Request__copy_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__copy_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut source_address;
		vm32_size_ut size;
		vm32_address_ut dest_address;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__copy_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		vm32_address_ut data;
	} __Request__read_overwrite_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__read_overwrite_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		vm32_address_ut data;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__read_overwrite_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_sync_t sync_flags;
	} __Request__msync_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__msync_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_sync_t sync_flags;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__msync_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_behavior_t new_behavior;
	} __Request__behavior_set_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__behavior_set_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_behavior_t new_behavior;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__behavior_set_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		vm32_address_ut mask;
		int flags;
		vm32_offset_ut offset;
		boolean_t copy;
		vm_prot_ut cur_protection;
		vm_prot_ut max_protection;
		vm_inherit_ut inheritance;
	} __Request__map_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object;
	} __RequestKData__map_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		vm32_address_ut mask;
		int flags;
		vm32_offset_ut offset;
		boolean_t copy;
		vm_prot_ut cur_protection;
		vm_prot_ut max_protection;
		vm_inherit_ut inheritance;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__map_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_machine_attribute_t attribute;
		vm_machine_attribute_val_t value;
	} __Request__machine_attribute_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__machine_attribute_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		vm_machine_attribute_t attribute;
		vm_machine_attribute_val_t value;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__machine_attribute_t __attribute__((unused));
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
		mach_msg_port_descriptor_t src_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_address_ut target_address;
		vm32_size_ut size;
		vm32_address_ut mask;
		boolean_t anywhere;
		vm32_address_ut src_address;
		boolean_t copy;
		vm_inherit_ut inheritance;
	} __Request__remap_t __attribute__((unused));
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
		mach_msg_port_descriptor_t src_task;
	} __RequestKData__remap_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut target_address;
		vm32_size_ut size;
		vm32_address_ut mask;
		boolean_t anywhere;
		vm32_address_ut src_address;
		boolean_t copy;
		vm_inherit_ut inheritance;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__remap_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t must_wire;
	} __Request___task_wire_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData___task_wire_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		boolean_t must_wire;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData___task_wire_t __attribute__((unused));
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
		mach_msg_port_descriptor_t parent_entry;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_size_ut size;
		vm32_offset_ut offset;
		vm_prot_ut permission;
	} __Request__make_memory_entry_t __attribute__((unused));
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
		mach_msg_port_descriptor_t parent_entry;
	} __RequestKData__make_memory_entry_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_size_ut size;
		vm32_offset_ut offset;
		vm_prot_ut permission;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__make_memory_entry_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_offset_t offset;
	} __Request__map_page_query_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__map_page_query_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_offset_t offset;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__map_page_query_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
	} __Request__region_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__region_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__region_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__mapped_pages_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__mapped_pages_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__mapped_pages_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
	} __Request__region_recurse_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__region_recurse_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__region_recurse_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
	} __Request__region_recurse_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__region_recurse_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__region_recurse_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
	} __Request__region_info_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__region_info_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__region_info_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm_region_flavor_t flavor;
		mach_msg_type_number_t infoCnt;
	} __Request__region_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__region_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm_region_flavor_t flavor;
		mach_msg_type_number_t infoCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__region_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t parent_entry;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		memory_object_size_ut size;
		memory_object_offset_ut offset;
		vm_prot_ut permission;
	} __Request__make_memory_entry_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t parent_entry;
	} __RequestKData__make_memory_entry_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		memory_object_size_ut size;
		memory_object_offset_ut offset;
		vm_prot_ut permission;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__make_memory_entry_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		vm32_address_ut mask;
		int flags;
		memory_object_offset_ut offset;
		boolean_t copy;
		vm_prot_ut cur_protection;
		vm_prot_ut max_protection;
		vm_inherit_ut inheritance;
	} __Request__map_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object;
	} __RequestKData__map_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_ut address;
		vm32_size_ut size;
		vm32_address_ut mask;
		int flags;
		memory_object_offset_ut offset;
		boolean_t copy;
		vm_prot_ut cur_protection;
		vm_prot_ut max_protection;
		vm_inherit_ut inheritance;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__map_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm32_address_t address;
		vm_purgable_t control;
		int state;
	} __Request__purgable_control_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData__purgable_control_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm_purgable_t control;
		int state;
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData__purgable_control_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request___map_exec_lockdown_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __RequestKData___map_exec_lockdown_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		char padding[0]; /* Avoid generating empty UData structs */
	} __RequestUData___map_exec_lockdown_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Request__map_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion__vm32_map_subsystem__defined
#define __RequestUnion__vm32_map_subsystem__defined
union __RequestUnion__vm32_map_subsystem {
	__Request__region_t Request_region;
	__Request__allocate_t Request_allocate;
	__Request__deallocate_t Request_deallocate;
	__Request__protect_t Request_protect;
	__Request__inherit_t Request_inherit;
	__Request__read_t Request_read;
	__Request__read_list_t Request_read_list;
	__Request__write_t Request_write;
	__Request__copy_t Request_copy;
	__Request__read_overwrite_t Request_read_overwrite;
	__Request__msync_t Request_msync;
	__Request__behavior_set_t Request_behavior_set;
	__Request__map_t Request_map;
	__Request__machine_attribute_t Request_machine_attribute;
	__Request__remap_t Request_remap;
	__Request___task_wire_t Request__task_wire;
	__Request__make_memory_entry_t Request_make_memory_entry;
	__Request__map_page_query_t Request_map_page_query;
	__Request__region_info_t Request_region_info;
	__Request__mapped_pages_info_t Request_mapped_pages_info;
	__Request__region_recurse_t Request_region_recurse;
	__Request__region_recurse_64_t Request_region_recurse_64;
	__Request__region_info_64_t Request_region_info_64;
	__Request__region_64_t Request_region_64;
	__Request__make_memory_entry_64_t Request_make_memory_entry_64;
	__Request__map_64_t Request_map_64;
	__Request__purgable_control_t Request_purgable_control;
	__Request___map_exec_lockdown_t Request__map_exec_lockdown;
};
#endif /* __RequestUnion__vm32_map_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__map_subsystem__defined
#define __Reply__map_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t object_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
	} __Reply__region_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object_name;
	} __ReplyKData__region_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__region_t __attribute__((unused));
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
		vm32_address_ut address;
	} __Reply__allocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__allocate_t __attribute__((unused));
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
		vm32_address_ut address;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__allocate_t __attribute__((unused));
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
	} __Reply__deallocate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__deallocate_t __attribute__((unused));
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
	} __ReplyUData__deallocate_t __attribute__((unused));
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
	} __Reply__protect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__protect_t __attribute__((unused));
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
	} __ReplyUData__protect_t __attribute__((unused));
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
	} __Reply__inherit_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__inherit_t __attribute__((unused));
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
	} __ReplyUData__inherit_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t dataCnt;
	} __Reply__read_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t data;
	} __ReplyKData__read_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		mach_msg_type_number_t dataCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__read_t __attribute__((unused));
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
		vm32_read_entry_t data_list;
	} __Reply__read_list_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__read_list_t __attribute__((unused));
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
		vm32_read_entry_t data_list;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__read_list_t __attribute__((unused));
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
	} __Reply__write_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__write_t __attribute__((unused));
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
	} __ReplyUData__write_t __attribute__((unused));
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
	} __Reply__copy_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__copy_t __attribute__((unused));
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
	} __ReplyUData__copy_t __attribute__((unused));
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
		vm32_size_ut outsize;
	} __Reply__read_overwrite_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__read_overwrite_t __attribute__((unused));
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
		vm32_size_ut outsize;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__read_overwrite_t __attribute__((unused));
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
	} __Reply__msync_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__msync_t __attribute__((unused));
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
	} __ReplyUData__msync_t __attribute__((unused));
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
	} __Reply__behavior_set_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__behavior_set_t __attribute__((unused));
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
	} __ReplyUData__behavior_set_t __attribute__((unused));
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
		vm32_address_ut address;
	} __Reply__map_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__map_t __attribute__((unused));
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
		vm32_address_ut address;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__map_t __attribute__((unused));
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
		vm_machine_attribute_val_t value;
	} __Reply__machine_attribute_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__machine_attribute_t __attribute__((unused));
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
		vm_machine_attribute_val_t value;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__machine_attribute_t __attribute__((unused));
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
		vm32_address_ut target_address;
		vm_prot_ut cur_protection;
		vm_prot_ut max_protection;
	} __Reply__remap_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__remap_t __attribute__((unused));
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
		vm32_address_ut target_address;
		vm_prot_ut cur_protection;
		vm_prot_ut max_protection;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__remap_t __attribute__((unused));
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
	} __Reply___task_wire_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData___task_wire_t __attribute__((unused));
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
	} __ReplyUData___task_wire_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_size_ut size;
	} __Reply__make_memory_entry_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object_handle;
	} __ReplyKData__make_memory_entry_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_size_ut size;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__make_memory_entry_t __attribute__((unused));
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
		integer_t disposition;
		integer_t ref_count;
	} __Reply__map_page_query_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__map_page_query_t __attribute__((unused));
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
		integer_t disposition;
		integer_t ref_count;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__map_page_query_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t objects;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_info_region_t region;
		mach_msg_type_number_t objectsCnt;
	} __Reply__region_info_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t objects;
	} __ReplyKData__region_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm_info_region_t region;
		mach_msg_type_number_t objectsCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__region_info_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t pages;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t pagesCnt;
	} __Reply__mapped_pages_info_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t pages;
	} __ReplyKData__mapped_pages_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		mach_msg_type_number_t pagesCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__mapped_pages_info_t __attribute__((unused));
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
		vm32_address_t address;
		vm32_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
	} __Reply__region_recurse_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__region_recurse_t __attribute__((unused));
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
		vm32_address_t address;
		vm32_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__region_recurse_t __attribute__((unused));
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
		vm32_address_t address;
		vm32_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
	} __Reply__region_recurse_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__region_recurse_64_t __attribute__((unused));
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
		vm32_address_t address;
		vm32_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__region_recurse_64_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t objects;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_info_region_64_t region;
		mach_msg_type_number_t objectsCnt;
	} __Reply__region_info_64_t __attribute__((unused));
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
		mach_msg_ool_descriptor_t objects;
	} __ReplyKData__region_info_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm_info_region_64_t region;
		mach_msg_type_number_t objectsCnt;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__region_info_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
	} __Reply__region_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object_name;
	} __ReplyKData__region_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm32_address_t address;
		vm32_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__region_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		memory_object_size_ut size;
	} __Reply__make_memory_entry_64_t __attribute__((unused));
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
		mach_msg_port_descriptor_t object_handle;
	} __ReplyKData__make_memory_entry_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for pure user data */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		memory_object_size_ut size;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__make_memory_entry_64_t __attribute__((unused));
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
		vm32_address_ut address;
	} __Reply__map_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__map_64_t __attribute__((unused));
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
		vm32_address_ut address;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__map_64_t __attribute__((unused));
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
		int state;
	} __Reply__purgable_control_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData__purgable_control_t __attribute__((unused));
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
		int state;
		char padding[0]; /* Avoid generating empty UData structs */
	} __ReplyUData__purgable_control_t __attribute__((unused));
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
	} __Reply___map_exec_lockdown_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
/* Struct for kernel processed data (Header + Descriptors) */
#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __ReplyKData___map_exec_lockdown_t __attribute__((unused));
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
	} __ReplyUData___map_exec_lockdown_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Reply__map_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__vm32_map_subsystem__defined
#define __ReplyUnion__vm32_map_subsystem__defined
union __ReplyUnion__vm32_map_subsystem {
	__Reply__region_t Reply_region;
	__Reply__allocate_t Reply_allocate;
	__Reply__deallocate_t Reply_deallocate;
	__Reply__protect_t Reply_protect;
	__Reply__inherit_t Reply_inherit;
	__Reply__read_t Reply_read;
	__Reply__read_list_t Reply_read_list;
	__Reply__write_t Reply_write;
	__Reply__copy_t Reply_copy;
	__Reply__read_overwrite_t Reply_read_overwrite;
	__Reply__msync_t Reply_msync;
	__Reply__behavior_set_t Reply_behavior_set;
	__Reply__map_t Reply_map;
	__Reply__machine_attribute_t Reply_machine_attribute;
	__Reply__remap_t Reply_remap;
	__Reply___task_wire_t Reply__task_wire;
	__Reply__make_memory_entry_t Reply_make_memory_entry;
	__Reply__map_page_query_t Reply_map_page_query;
	__Reply__region_info_t Reply_region_info;
	__Reply__mapped_pages_info_t Reply_mapped_pages_info;
	__Reply__region_recurse_t Reply_region_recurse;
	__Reply__region_recurse_64_t Reply_region_recurse_64;
	__Reply__region_info_64_t Reply_region_info_64;
	__Reply__region_64_t Reply_region_64;
	__Reply__make_memory_entry_64_t Reply_make_memory_entry_64;
	__Reply__map_64_t Reply_map_64;
	__Reply__purgable_control_t Reply_purgable_control;
	__Reply___map_exec_lockdown_t Reply__map_exec_lockdown;
};
#endif /* __ReplyUnion__vm32_map_subsystem__defined */

#ifndef subsystem_to_name_map_map
#define subsystem_to_name_map_map \
    { "region", 3800 },\
    { "allocate", 3801 },\
    { "deallocate", 3802 },\
    { "protect", 3803 },\
    { "inherit", 3804 },\
    { "read", 3805 },\
    { "read_list", 3806 },\
    { "write", 3807 },\
    { "copy", 3808 },\
    { "read_overwrite", 3809 },\
    { "msync", 3810 },\
    { "behavior_set", 3811 },\
    { "map", 3812 },\
    { "machine_attribute", 3813 },\
    { "remap", 3814 },\
    { "_task_wire", 3815 },\
    { "make_memory_entry", 3816 },\
    { "map_page_query", 3817 },\
    { "region_info", 3818 },\
    { "mapped_pages_info", 3819 },\
    { "region_recurse", 3821 },\
    { "region_recurse_64", 3822 },\
    { "region_info_64", 3823 },\
    { "region_64", 3824 },\
    { "make_memory_entry_64", 3825 },\
    { "map_64", 3826 },\
    { "purgable_control", 3830 },\
    { "_map_exec_lockdown", 3831 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _map_server_ */
