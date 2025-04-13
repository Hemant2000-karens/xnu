/*
 * IDENTIFICATION:
 * stub generated by bootstrap_cmds-138
 * OPTIONS: 
 *	KernelServer
 */

/* Module memory_entry */

#define	__MIG_check__Request__memory_entry_subsystem__ 1

#include "memory_entry_server.h"

#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif

#ifndef	__DeclareRcvRpc
#define	__DeclareRcvRpc(_NUM_, _NAME_)
#endif	/* __DeclareRcvRpc */

#ifndef	__BeforeRcvRpc
#define	__BeforeRcvRpc(_NUM_, _NAME_)
#endif	/* __BeforeRcvRpc */

#ifndef	__AfterRcvRpc
#define	__AfterRcvRpc(_NUM_, _NAME_)
#endif	/* __AfterRcvRpc */

#ifndef	__DeclareRcvSimple
#define	__DeclareRcvSimple(_NUM_, _NAME_)
#endif	/* __DeclareRcvSimple */

#ifndef	__BeforeRcvSimple
#define	__BeforeRcvSimple(_NUM_, _NAME_)
#endif	/* __BeforeRcvSimple */

#ifndef	__AfterRcvSimple
#define	__AfterRcvSimple(_NUM_, _NAME_)
#endif	/* __AfterRcvSimple */

#define novalue void

#if	__MigKernelSpecificCode
#define msgh_request_port	msgh_remote_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_REMOTE(bits)
#define msgh_reply_port		msgh_local_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_LOCAL(bits)
#else
#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)
#endif /* __MigKernelSpecificCode */

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* Forward Declarations */


mig_internal novalue _Xmach_memory_entry_purgable_control
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xmach_memory_entry_access_tracking
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xmach_memory_entry_ownership_from_user
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);


#if ( __MigTypeCheck )
#if __MIG_check__Request__memory_entry_subsystem__
#if !defined(__MIG_check__Request__mach_memory_entry_purgable_control_t__defined)
#define __MIG_check__Request__mach_memory_entry_purgable_control_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_memory_entry_purgable_control_t(
	__attribute__((__unused__)) __RequestKData__mach_memory_entry_purgable_control_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_memory_entry_purgable_control_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_memory_entry_purgable_control_t __Request;
	typedef __RequestUData__mach_memory_entry_purgable_control_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_memory_entry_purgable_control_t__defined) */
#endif /* __MIG_check__Request__memory_entry_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine mach_memory_entry_purgable_control */
mig_internal novalue _Xmach_memory_entry_purgable_control
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		vm_purgable_t control;
		int state;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_memory_entry_purgable_control_t RequestK;
	typedef __RequestUData__mach_memory_entry_purgable_control_t __RequestU;
	typedef __ReplyKData__mach_memory_entry_purgable_control_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_memory_entry_purgable_control_t ReplyU __attribute__((unused));
	typedef __Reply__mach_memory_entry_purgable_control_t Reply __attribute__((unused));
	typedef __Request__mach_memory_entry_purgable_control_t __Request __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	RequestK *InKP = (RequestK *) InHeadP;
	RequestU *In0UP = (RequestU *) InDataP;
	ReplyK *OutKP = (ReplyK *) OutHeadP;
	ReplyU *OutUP = (ReplyU *) OutDataP;
	(void)OutUP;
#ifdef	__MIG_check__Request__mach_memory_entry_purgable_control_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_memory_entry_purgable_control_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(4900, "mach_memory_entry_purgable_control")
	__BeforeRcvRpc(4900, "mach_memory_entry_purgable_control")

#if	defined(__MIG_check__Request__mach_memory_entry_purgable_control_t__defined)
	check_result = __MIG_check__Request__mach_memory_entry_purgable_control_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_memory_entry_purgable_control_t__defined) */

	OutUP->RetCode = mach_memory_entry_purgable_control(null_conversion(InKP->Head.msgh_request_port), In0UP->control, &In0UP->state);
	if (OutUP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, OutUP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutUP->NDR = NDR_record;


	OutUP->state = In0UP->state;

	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(4900, "mach_memory_entry_purgable_control")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__memory_entry_subsystem__
#if !defined(__MIG_check__Request__mach_memory_entry_access_tracking_t__defined)
#define __MIG_check__Request__mach_memory_entry_access_tracking_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_memory_entry_access_tracking_t(
	__attribute__((__unused__)) __RequestKData__mach_memory_entry_access_tracking_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_memory_entry_access_tracking_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_memory_entry_access_tracking_t __Request;
	typedef __RequestUData__mach_memory_entry_access_tracking_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_memory_entry_access_tracking_t__defined) */
#endif /* __MIG_check__Request__memory_entry_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine mach_memory_entry_access_tracking */
mig_internal novalue _Xmach_memory_entry_access_tracking
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		int access_tracking;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_memory_entry_access_tracking_t RequestK;
	typedef __RequestUData__mach_memory_entry_access_tracking_t __RequestU;
	typedef __ReplyKData__mach_memory_entry_access_tracking_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_memory_entry_access_tracking_t ReplyU __attribute__((unused));
	typedef __Reply__mach_memory_entry_access_tracking_t Reply __attribute__((unused));
	typedef __Request__mach_memory_entry_access_tracking_t __Request __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	RequestK *InKP = (RequestK *) InHeadP;
	RequestU *In0UP = (RequestU *) InDataP;
	ReplyK *OutKP = (ReplyK *) OutHeadP;
	ReplyU *OutUP = (ReplyU *) OutDataP;
	(void)OutUP;
#ifdef	__MIG_check__Request__mach_memory_entry_access_tracking_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_memory_entry_access_tracking_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(4901, "mach_memory_entry_access_tracking")
	__BeforeRcvRpc(4901, "mach_memory_entry_access_tracking")

#if	defined(__MIG_check__Request__mach_memory_entry_access_tracking_t__defined)
	check_result = __MIG_check__Request__mach_memory_entry_access_tracking_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_memory_entry_access_tracking_t__defined) */

	OutUP->RetCode = mach_memory_entry_access_tracking(null_conversion(InKP->Head.msgh_request_port), &In0UP->access_tracking, &OutUP->access_tracking_reads, &OutUP->access_tracking_writes);
	if (OutUP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, OutUP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutUP->NDR = NDR_record;


	OutUP->access_tracking = In0UP->access_tracking;

	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(4901, "mach_memory_entry_access_tracking")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__memory_entry_subsystem__
#if !defined(__MIG_check__Request__mach_memory_entry_ownership_from_user_t__defined)
#define __MIG_check__Request__mach_memory_entry_ownership_from_user_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_memory_entry_ownership_from_user_t(
	__attribute__((__unused__)) __RequestKData__mach_memory_entry_ownership_from_user_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_memory_entry_ownership_from_user_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_memory_entry_ownership_from_user_t __Request;
	typedef __RequestUData__mach_memory_entry_ownership_from_user_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if (!(InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->msgh_body.msgh_descriptor_count != 1) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (InKP->owner.type != MACH_MSG_PORT_DESCRIPTOR ||
	    InKP->owner.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_memory_entry_ownership_from_user_t__defined) */
#endif /* __MIG_check__Request__memory_entry_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine mach_memory_entry_ownership_from_user */
mig_internal novalue _Xmach_memory_entry_ownership_from_user
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		int ledger_tag;
		int ledger_flags;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_memory_entry_ownership_from_user_t RequestK;
	typedef __RequestUData__mach_memory_entry_ownership_from_user_t __RequestU;
	typedef __ReplyKData__mach_memory_entry_ownership_from_user_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_memory_entry_ownership_from_user_t ReplyU __attribute__((unused));
	typedef __Reply__mach_memory_entry_ownership_from_user_t Reply __attribute__((unused));
	typedef __Request__mach_memory_entry_ownership_from_user_t __Request __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	RequestK *InKP = (RequestK *) InHeadP;
	RequestU *In0UP = (RequestU *) InDataP;
	ReplyK *OutKP = (ReplyK *) OutHeadP;
	ReplyU *OutUP = (ReplyU *) OutDataP;
	(void)OutUP;
#ifdef	__MIG_check__Request__mach_memory_entry_ownership_from_user_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_memory_entry_ownership_from_user_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(4902, "mach_memory_entry_ownership_from_user")
	__BeforeRcvRpc(4902, "mach_memory_entry_ownership_from_user")

#if	defined(__MIG_check__Request__mach_memory_entry_ownership_from_user_t__defined)
	check_result = __MIG_check__Request__mach_memory_entry_ownership_from_user_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_memory_entry_ownership_from_user_t__defined) */

	OutUP->RetCode = mach_memory_entry_ownership_from_user(null_conversion(InKP->Head.msgh_request_port), InKP->owner.name, In0UP->ledger_tag, In0UP->ledger_flags);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutUP->NDR = NDR_record;


	__AfterRcvRpc(4902, "mach_memory_entry_ownership_from_user")
}



/* Description of this kernel subsystem, for use in direct RPC */
const struct memory_entry_subsystem memory_entry_subsystem = {
	memory_entry_server_routine,
	4900,
	4903,
	(mach_msg_size_t)sizeof(union __ReplyUnion__memory_entry_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_memory_entry_purgable_control, 3, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_memory_entry_purgable_control_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_memory_entry_access_tracking, 4, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_memory_entry_access_tracking_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_memory_entry_ownership_from_user, 4, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_memory_entry_ownership_from_user_t)},
	}
};

mig_external boolean_t memory_entry_server
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP)
{
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	mig_kern_routine_t routine;

	OutHeadP->msgh_bits = MACH_MSGH_BITS(MACH_MSGH_BITS_REPLY(InHeadP->msgh_bits), 0);
	OutHeadP->msgh_remote_port = InHeadP->msgh_reply_port;
	/* Minimal size: routine() will update it if different */
	OutHeadP->msgh_size = (mach_msg_size_t)sizeof(mig_reply_error_t);
	OutHeadP->msgh_local_port = MACH_PORT_NULL;
	OutHeadP->msgh_id = InHeadP->msgh_id + 100;
	OutHeadP->msgh_reserved = 0;

	if ((InHeadP->msgh_id > 4902) || (InHeadP->msgh_id < 4900) ||
	    ((routine = memory_entry_subsystem.kroutine[InHeadP->msgh_id - 4900].kstub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, InDataP, InTrailerP, OutHeadP, OutDataP);
	return TRUE;
}

mig_external mig_kern_routine_t memory_entry_server_routine
	(mach_msg_header_t *InHeadP)
{
	int msgh_id;

	msgh_id = InHeadP->msgh_id - 4900;

	if ((msgh_id > 2) || (msgh_id < 0))
		return 0;

	return memory_entry_subsystem.kroutine[msgh_id].kstub_routine;
}
