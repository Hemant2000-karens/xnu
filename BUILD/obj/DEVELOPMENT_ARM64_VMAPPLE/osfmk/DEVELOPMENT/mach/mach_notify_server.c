/*
 * IDENTIFICATION:
 * stub generated by bootstrap_cmds-138
 * OPTIONS: 
 */

/* Module notify */

#define	__MIG_check__Request__notify_subsystem__ 1

#include "mach_notify_server.h"

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

#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* Forward Declarations */


mig_internal novalue _Xmach_notify_port_deleted
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xmach_notify_port_destroyed
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xmach_notify_no_senders
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xmach_notify_send_once
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xmach_notify_dead_name
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);


#if ( __MigTypeCheck )
#if __MIG_check__Request__notify_subsystem__
#if !defined(__MIG_check__Request__mach_notify_port_deleted_t__defined)
#define __MIG_check__Request__mach_notify_port_deleted_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_notify_port_deleted_t(
	__attribute__((__unused__)) __RequestKData__mach_notify_port_deleted_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_notify_port_deleted_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_notify_port_deleted_t __Request;
	typedef __RequestUData__mach_notify_port_deleted_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_notify_port_deleted_t__defined) */
#endif /* __MIG_check__Request__notify_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* SimpleRoutine mach_notify_port_deleted */
mig_internal novalue _Xmach_notify_port_deleted
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		mach_port_name_t name;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_notify_port_deleted_t RequestK;
	typedef __RequestUData__mach_notify_port_deleted_t __RequestU;
	typedef __ReplyKData__mach_notify_port_deleted_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_notify_port_deleted_t ReplyU __attribute__((unused));
	typedef __Reply__mach_notify_port_deleted_t Reply __attribute__((unused));
	typedef __Request__mach_notify_port_deleted_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__mach_notify_port_deleted_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_notify_port_deleted_t__defined */

	__DeclareRcvSimple(65, "mach_notify_port_deleted")
	__BeforeRcvSimple(65, "mach_notify_port_deleted")

#if	defined(__MIG_check__Request__mach_notify_port_deleted_t__defined)
	check_result = __MIG_check__Request__mach_notify_port_deleted_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_notify_port_deleted_t__defined) */

	OutUP->RetCode = do_mach_notify_port_deleted(InKP->Head.msgh_request_port, In0UP->name);
	__AfterRcvSimple(65, "mach_notify_port_deleted")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__notify_subsystem__
#if !defined(__MIG_check__Request__mach_notify_port_destroyed_t__defined)
#define __MIG_check__Request__mach_notify_port_destroyed_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_notify_port_destroyed_t(
	__attribute__((__unused__)) __RequestKData__mach_notify_port_destroyed_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_notify_port_destroyed_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_notify_port_destroyed_t __Request;
	typedef __RequestUData__mach_notify_port_destroyed_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if (!(InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->msgh_body.msgh_descriptor_count != 1) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (InKP->rights.type != MACH_MSG_PORT_DESCRIPTOR ||
	    InKP->rights.disposition != 16)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_notify_port_destroyed_t__defined) */
#endif /* __MIG_check__Request__notify_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* SimpleRoutine mach_notify_port_destroyed */
mig_internal novalue _Xmach_notify_port_destroyed
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_notify_port_destroyed_t RequestK;
	typedef __RequestUData__mach_notify_port_destroyed_t __RequestU;
	typedef __ReplyKData__mach_notify_port_destroyed_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_notify_port_destroyed_t ReplyU __attribute__((unused));
	typedef __Reply__mach_notify_port_destroyed_t Reply __attribute__((unused));
	typedef __Request__mach_notify_port_destroyed_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__mach_notify_port_destroyed_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_notify_port_destroyed_t__defined */

	__DeclareRcvSimple(69, "mach_notify_port_destroyed")
	__BeforeRcvSimple(69, "mach_notify_port_destroyed")

#if	defined(__MIG_check__Request__mach_notify_port_destroyed_t__defined)
	check_result = __MIG_check__Request__mach_notify_port_destroyed_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_notify_port_destroyed_t__defined) */

	OutUP->RetCode = do_mach_notify_port_destroyed(InKP->Head.msgh_request_port, InKP->rights.name);
	__AfterRcvSimple(69, "mach_notify_port_destroyed")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__notify_subsystem__
#if !defined(__MIG_check__Request__mach_notify_no_senders_t__defined)
#define __MIG_check__Request__mach_notify_no_senders_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_notify_no_senders_t(
	__attribute__((__unused__)) __RequestKData__mach_notify_no_senders_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_notify_no_senders_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_notify_no_senders_t __Request;
	typedef __RequestUData__mach_notify_no_senders_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_notify_no_senders_t__defined) */
#endif /* __MIG_check__Request__notify_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* SimpleRoutine mach_notify_no_senders */
mig_internal novalue _Xmach_notify_no_senders
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		mach_port_mscount_t mscount;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_notify_no_senders_t RequestK;
	typedef __RequestUData__mach_notify_no_senders_t __RequestU;
	typedef __ReplyKData__mach_notify_no_senders_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_notify_no_senders_t ReplyU __attribute__((unused));
	typedef __Reply__mach_notify_no_senders_t Reply __attribute__((unused));
	typedef __Request__mach_notify_no_senders_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__mach_notify_no_senders_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_notify_no_senders_t__defined */

	__DeclareRcvSimple(70, "mach_notify_no_senders")
	__BeforeRcvSimple(70, "mach_notify_no_senders")

#if	defined(__MIG_check__Request__mach_notify_no_senders_t__defined)
	check_result = __MIG_check__Request__mach_notify_no_senders_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_notify_no_senders_t__defined) */

	OutUP->RetCode = do_mach_notify_no_senders(InKP->Head.msgh_request_port, In0UP->mscount);
	__AfterRcvSimple(70, "mach_notify_no_senders")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__notify_subsystem__
#if !defined(__MIG_check__Request__mach_notify_send_once_t__defined)
#define __MIG_check__Request__mach_notify_send_once_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_notify_send_once_t(
	__attribute__((__unused__)) __RequestKData__mach_notify_send_once_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_notify_send_once_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_notify_send_once_t __Request;
	typedef __RequestUData__mach_notify_send_once_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_notify_send_once_t__defined) */
#endif /* __MIG_check__Request__notify_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* SimpleRoutine mach_notify_send_once */
mig_internal novalue _Xmach_notify_send_once
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_notify_send_once_t RequestK;
	typedef __RequestUData__mach_notify_send_once_t __RequestU;
	typedef __ReplyKData__mach_notify_send_once_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_notify_send_once_t ReplyU __attribute__((unused));
	typedef __Reply__mach_notify_send_once_t Reply __attribute__((unused));
	typedef __Request__mach_notify_send_once_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__mach_notify_send_once_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_notify_send_once_t__defined */

	__DeclareRcvSimple(71, "mach_notify_send_once")
	__BeforeRcvSimple(71, "mach_notify_send_once")

#if	defined(__MIG_check__Request__mach_notify_send_once_t__defined)
	check_result = __MIG_check__Request__mach_notify_send_once_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_notify_send_once_t__defined) */

	OutUP->RetCode = do_mach_notify_send_once(InKP->Head.msgh_request_port);
	__AfterRcvSimple(71, "mach_notify_send_once")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__notify_subsystem__
#if !defined(__MIG_check__Request__mach_notify_dead_name_t__defined)
#define __MIG_check__Request__mach_notify_dead_name_t__defined

mig_internal kern_return_t __MIG_check__Request__mach_notify_dead_name_t(
	__attribute__((__unused__)) __RequestKData__mach_notify_dead_name_t *InKP,
	__attribute__((__unused__)) __RequestUData__mach_notify_dead_name_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__mach_notify_dead_name_t __Request;
	typedef __RequestUData__mach_notify_dead_name_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_notify_dead_name_t__defined) */
#endif /* __MIG_check__Request__notify_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* SimpleRoutine mach_notify_dead_name */
mig_internal novalue _Xmach_notify_dead_name
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		mach_port_name_t name;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__mach_notify_dead_name_t RequestK;
	typedef __RequestUData__mach_notify_dead_name_t __RequestU;
	typedef __ReplyKData__mach_notify_dead_name_t ReplyK __attribute__((unused));
	typedef __ReplyUData__mach_notify_dead_name_t ReplyU __attribute__((unused));
	typedef __Reply__mach_notify_dead_name_t Reply __attribute__((unused));
	typedef __Request__mach_notify_dead_name_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__mach_notify_dead_name_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_notify_dead_name_t__defined */

	__DeclareRcvSimple(72, "mach_notify_dead_name")
	__BeforeRcvSimple(72, "mach_notify_dead_name")

#if	defined(__MIG_check__Request__mach_notify_dead_name_t__defined)
	check_result = __MIG_check__Request__mach_notify_dead_name_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_notify_dead_name_t__defined) */

	OutUP->RetCode = do_mach_notify_dead_name(InKP->Head.msgh_request_port, In0UP->name);
	__AfterRcvSimple(72, "mach_notify_dead_name")
}



/* Description of this kernel subsystem, for use in direct RPC */
const struct do_notify_subsystem do_notify_subsystem = {
	notify_server_routine,
	64,
	73,
	(mach_msg_size_t)sizeof(union __ReplyUnion__do_notify_subsystem),
	(vm_address_t)0,
	{
		{0, 0, 0, 0, 0, 0},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_notify_port_deleted, 2, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_notify_port_deleted_t)},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_notify_port_destroyed, 2, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_notify_port_destroyed_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_notify_no_senders, 2, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_notify_no_senders_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_notify_send_once, 1, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_notify_send_once_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xmach_notify_dead_name, 2, 0, 0, (mach_msg_size_t)sizeof(__Reply__mach_notify_dead_name_t)},
	}
};

mig_external boolean_t notify_server
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

	if ((InHeadP->msgh_id > 72) || (InHeadP->msgh_id < 64) ||
	    ((routine = do_notify_subsystem.kroutine[InHeadP->msgh_id - 64].kstub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, InDataP, InTrailerP, OutHeadP, OutDataP);
	return TRUE;
}

mig_external mig_kern_routine_t notify_server_routine
	(mach_msg_header_t *InHeadP)
{
	int msgh_id;

	msgh_id = InHeadP->msgh_id - 64;

	if ((msgh_id > 8) || (msgh_id < 0))
		return 0;

	return do_notify_subsystem.kroutine[msgh_id].kstub_routine;
}
