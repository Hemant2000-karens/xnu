/*
 * IDENTIFICATION:
 * stub generated by bootstrap_cmds-138
 * OPTIONS: 
 *	KernelServer
 */

/* Module processor_set */

#define	__MIG_check__Request__processor_set_subsystem__ 1

#include "processor_set_server.h"

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


mig_internal novalue _Xprocessor_set_statistics
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xprocessor_set_tasks
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xprocessor_set_threads
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xprocessor_set_stack_usage
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xprocessor_set_info
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);

mig_internal novalue _Xprocessor_set_tasks_with_flavor
	(mach_msg_header_t *InHeadP, void *InDataP, mach_msg_max_trailer_t *InTrailerP, mach_msg_header_t *OutHeadP, void *OutDataP);


#if ( __MigTypeCheck )
#if __MIG_check__Request__processor_set_subsystem__
#if !defined(__MIG_check__Request__processor_set_statistics_t__defined)
#define __MIG_check__Request__processor_set_statistics_t__defined

mig_internal kern_return_t __MIG_check__Request__processor_set_statistics_t(
	__attribute__((__unused__)) __RequestKData__processor_set_statistics_t *InKP,
	__attribute__((__unused__)) __RequestUData__processor_set_statistics_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__processor_set_statistics_t __Request;
	typedef __RequestUData__processor_set_statistics_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__processor_set_statistics_t__defined) */
#endif /* __MIG_check__Request__processor_set_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine processor_set_statistics */
mig_internal novalue _Xprocessor_set_statistics
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		processor_set_flavor_t flavor;
		mach_msg_type_number_t info_outCnt;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__processor_set_statistics_t RequestK;
	typedef __RequestUData__processor_set_statistics_t __RequestU;
	typedef __ReplyKData__processor_set_statistics_t ReplyK __attribute__((unused));
	typedef __ReplyUData__processor_set_statistics_t ReplyU __attribute__((unused));
	typedef __Reply__processor_set_statistics_t Reply __attribute__((unused));
	typedef __Request__processor_set_statistics_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__processor_set_statistics_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__processor_set_statistics_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(4000, "processor_set_statistics")
	__BeforeRcvRpc(4000, "processor_set_statistics")

#if	defined(__MIG_check__Request__processor_set_statistics_t__defined)
	check_result = __MIG_check__Request__processor_set_statistics_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__processor_set_statistics_t__defined) */

	OutUP->info_outCnt = 5;
	if (In0UP->info_outCnt < OutUP->info_outCnt)
		OutUP->info_outCnt = In0UP->info_outCnt;

	OutUP->RetCode = processor_set_statistics(convert_port_to_pset_name(InKP->Head.msgh_request_port), In0UP->flavor, OutUP->info_out, &OutUP->info_outCnt);
	if (OutUP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, OutUP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutUP->NDR = NDR_record;

	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 20) + (((4 * OutUP->info_outCnt)));

	__AfterRcvRpc(4000, "processor_set_statistics")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__processor_set_subsystem__
#if !defined(__MIG_check__Request__processor_set_tasks_t__defined)
#define __MIG_check__Request__processor_set_tasks_t__defined

mig_internal kern_return_t __MIG_check__Request__processor_set_tasks_t(
	__attribute__((__unused__)) __RequestKData__processor_set_tasks_t *InKP,
	__attribute__((__unused__)) __RequestUData__processor_set_tasks_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__processor_set_tasks_t __Request;
	typedef __RequestUData__processor_set_tasks_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__processor_set_tasks_t__defined) */
#endif /* __MIG_check__Request__processor_set_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine processor_set_tasks */
mig_internal novalue _Xprocessor_set_tasks
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
	typedef __RequestKData__processor_set_tasks_t RequestK;
	typedef __RequestUData__processor_set_tasks_t __RequestU;
	typedef __ReplyKData__processor_set_tasks_t ReplyK __attribute__((unused));
	typedef __ReplyUData__processor_set_tasks_t ReplyU __attribute__((unused));
	typedef __Reply__processor_set_tasks_t Reply __attribute__((unused));
	typedef __Request__processor_set_tasks_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__processor_set_tasks_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__processor_set_tasks_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t task_listTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		FALSE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		17,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t task_listTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		FALSE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		19,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	task_array_t task_list;

	__DeclareRcvRpc(4005, "processor_set_tasks")
	__BeforeRcvRpc(4005, "processor_set_tasks")

#if	defined(__MIG_check__Request__processor_set_tasks_t__defined)
	check_result = __MIG_check__Request__processor_set_tasks_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__processor_set_tasks_t__defined) */

#if	UseStaticTemplates
	OutKP->task_list = task_listTemplate;
#else	/* UseStaticTemplates */
#if	__MigKernelSpecificCode
	OutKP->task_list.disposition = 17;
#else
	OutKP->task_list.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutKP->task_list.deallocate =  FALSE;
	OutKP->task_list.type = MACH_MSG_OOL_PORTS_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = processor_set_tasks(convert_port_to_pset(InKP->Head.msgh_request_port), &task_list, &OutUP->task_listCnt);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutKP->task_list.address = (void *)task_list;
	OutKP->task_list.count = OutUP->task_listCnt;


	OutUP->NDR = NDR_record;


	OutKP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutKP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(4005, "processor_set_tasks")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__processor_set_subsystem__
#if !defined(__MIG_check__Request__processor_set_threads_t__defined)
#define __MIG_check__Request__processor_set_threads_t__defined

mig_internal kern_return_t __MIG_check__Request__processor_set_threads_t(
	__attribute__((__unused__)) __RequestKData__processor_set_threads_t *InKP,
	__attribute__((__unused__)) __RequestUData__processor_set_threads_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__processor_set_threads_t __Request;
	typedef __RequestUData__processor_set_threads_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__processor_set_threads_t__defined) */
#endif /* __MIG_check__Request__processor_set_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine processor_set_threads */
mig_internal novalue _Xprocessor_set_threads
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
	typedef __RequestKData__processor_set_threads_t RequestK;
	typedef __RequestUData__processor_set_threads_t __RequestU;
	typedef __ReplyKData__processor_set_threads_t ReplyK __attribute__((unused));
	typedef __ReplyUData__processor_set_threads_t ReplyU __attribute__((unused));
	typedef __Reply__processor_set_threads_t Reply __attribute__((unused));
	typedef __Request__processor_set_threads_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__processor_set_threads_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__processor_set_threads_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t thread_listTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		FALSE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		17,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t thread_listTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		FALSE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		19,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	thread_act_array_t thread_list;

	__DeclareRcvRpc(4006, "processor_set_threads")
	__BeforeRcvRpc(4006, "processor_set_threads")

#if	defined(__MIG_check__Request__processor_set_threads_t__defined)
	check_result = __MIG_check__Request__processor_set_threads_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__processor_set_threads_t__defined) */

#if	UseStaticTemplates
	OutKP->thread_list = thread_listTemplate;
#else	/* UseStaticTemplates */
#if	__MigKernelSpecificCode
	OutKP->thread_list.disposition = 17;
#else
	OutKP->thread_list.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutKP->thread_list.deallocate =  FALSE;
	OutKP->thread_list.type = MACH_MSG_OOL_PORTS_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = processor_set_threads(convert_port_to_pset(InKP->Head.msgh_request_port), &thread_list, &OutUP->thread_listCnt);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutKP->thread_list.address = (void *)thread_list;
	OutKP->thread_list.count = OutUP->thread_listCnt;


	OutUP->NDR = NDR_record;


	OutKP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutKP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(4006, "processor_set_threads")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__processor_set_subsystem__
#if !defined(__MIG_check__Request__processor_set_stack_usage_t__defined)
#define __MIG_check__Request__processor_set_stack_usage_t__defined

mig_internal kern_return_t __MIG_check__Request__processor_set_stack_usage_t(
	__attribute__((__unused__)) __RequestKData__processor_set_stack_usage_t *InKP,
	__attribute__((__unused__)) __RequestUData__processor_set_stack_usage_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__processor_set_stack_usage_t __Request;
	typedef __RequestUData__processor_set_stack_usage_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__processor_set_stack_usage_t__defined) */
#endif /* __MIG_check__Request__processor_set_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine processor_set_stack_usage */
mig_internal novalue _Xprocessor_set_stack_usage
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
	typedef __RequestKData__processor_set_stack_usage_t RequestK;
	typedef __RequestUData__processor_set_stack_usage_t __RequestU;
	typedef __ReplyKData__processor_set_stack_usage_t ReplyK __attribute__((unused));
	typedef __ReplyUData__processor_set_stack_usage_t ReplyU __attribute__((unused));
	typedef __Reply__processor_set_stack_usage_t Reply __attribute__((unused));
	typedef __Request__processor_set_stack_usage_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__processor_set_stack_usage_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__processor_set_stack_usage_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(4008, "processor_set_stack_usage")
	__BeforeRcvRpc(4008, "processor_set_stack_usage")

#if	defined(__MIG_check__Request__processor_set_stack_usage_t__defined)
	check_result = __MIG_check__Request__processor_set_stack_usage_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__processor_set_stack_usage_t__defined) */

	OutUP->RetCode = processor_set_stack_usage(convert_port_to_pset(InKP->Head.msgh_request_port), &OutUP->ltotal, &OutUP->space, &OutUP->resident, &OutUP->maxusage, &OutUP->maxstack);
	if (OutUP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, OutUP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutUP->NDR = NDR_record;


	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(4008, "processor_set_stack_usage")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__processor_set_subsystem__
#if !defined(__MIG_check__Request__processor_set_info_t__defined)
#define __MIG_check__Request__processor_set_info_t__defined

mig_internal kern_return_t __MIG_check__Request__processor_set_info_t(
	__attribute__((__unused__)) __RequestKData__processor_set_info_t *InKP,
	__attribute__((__unused__)) __RequestUData__processor_set_info_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__processor_set_info_t __Request;
	typedef __RequestUData__processor_set_info_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__processor_set_info_t__defined) */
#endif /* __MIG_check__Request__processor_set_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine processor_set_info */
mig_internal novalue _Xprocessor_set_info
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		int flavor;
		mach_msg_type_number_t info_outCnt;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__processor_set_info_t RequestK;
	typedef __RequestUData__processor_set_info_t __RequestU;
	typedef __ReplyKData__processor_set_info_t ReplyK __attribute__((unused));
	typedef __ReplyUData__processor_set_info_t ReplyU __attribute__((unused));
	typedef __Reply__processor_set_info_t Reply __attribute__((unused));
	typedef __Request__processor_set_info_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__processor_set_info_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__processor_set_info_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t hostTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t hostTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	host_t host;

	__DeclareRcvRpc(4009, "processor_set_info")
	__BeforeRcvRpc(4009, "processor_set_info")

#if	defined(__MIG_check__Request__processor_set_info_t__defined)
	check_result = __MIG_check__Request__processor_set_info_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__processor_set_info_t__defined) */

#if	UseStaticTemplates
	OutKP->host = hostTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutKP->host.disposition = 17;
#else
	OutKP->host.disposition = 19;
#endif /* __MigKernelSpecificCode */
#if !(defined(KERNEL) && defined(__LP64__))
	OutKP->host.pad1 = 0;
#endif
	OutKP->host.pad2 = 0;
	OutKP->host.type = MACH_MSG_PORT_DESCRIPTOR;
#if defined(KERNEL)
	OutKP->host.pad_end = 0;
#endif
#endif	/* UseStaticTemplates */


	OutUP->info_outCnt = 5;
	if (In0UP->info_outCnt < OutUP->info_outCnt)
		OutUP->info_outCnt = In0UP->info_outCnt;

	RetCode = processor_set_info(convert_port_to_pset_name(InKP->Head.msgh_request_port), In0UP->flavor, &host, OutUP->info_out, &OutUP->info_outCnt);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutKP->host.name = (mach_port_t)convert_host_to_port(host);


	OutUP->NDR = NDR_record;

	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 20) + (((4 * OutUP->info_outCnt)));

	OutKP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutKP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(4009, "processor_set_info")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__processor_set_subsystem__
#if !defined(__MIG_check__Request__processor_set_tasks_with_flavor_t__defined)
#define __MIG_check__Request__processor_set_tasks_with_flavor_t__defined

mig_internal kern_return_t __MIG_check__Request__processor_set_tasks_with_flavor_t(
	__attribute__((__unused__)) __RequestKData__processor_set_tasks_with_flavor_t *InKP,
	__attribute__((__unused__)) __RequestUData__processor_set_tasks_with_flavor_t *In0UP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP)
{

	typedef __Request__processor_set_tasks_with_flavor_t __Request;
	typedef __RequestUData__processor_set_tasks_with_flavor_t __RequestU __attribute__((unused));
#if	__MigTypeCheck
	if ((InKP->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (InKP->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__processor_set_tasks_with_flavor_t__defined) */
#endif /* __MIG_check__Request__processor_set_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine processor_set_tasks_with_flavor */
mig_internal novalue _Xprocessor_set_tasks_with_flavor
	(mach_msg_header_t *InHeadP, __attribute__((__unused__)) void *InDataP,
	__attribute__((__unused__)) mach_msg_max_trailer_t *InTrailerP,
	mach_msg_header_t *OutHeadP, __attribute__((__unused__)) void *OutDataP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		NDR_record_t NDR;
		mach_task_flavor_t flavor;
		mach_msg_trailer_t trailer;
		char padding[0]; /* Avoid generating empty UData structs */
	} RequestU __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __RequestKData__processor_set_tasks_with_flavor_t RequestK;
	typedef __RequestUData__processor_set_tasks_with_flavor_t __RequestU;
	typedef __ReplyKData__processor_set_tasks_with_flavor_t ReplyK __attribute__((unused));
	typedef __ReplyUData__processor_set_tasks_with_flavor_t ReplyU __attribute__((unused));
	typedef __Reply__processor_set_tasks_with_flavor_t Reply __attribute__((unused));
	typedef __Request__processor_set_tasks_with_flavor_t __Request __attribute__((unused));

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
#ifdef	__MIG_check__Request__processor_set_tasks_with_flavor_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__processor_set_tasks_with_flavor_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t task_listTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		FALSE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		17,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t task_listTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		FALSE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		19,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	task_array_t task_list;

	__DeclareRcvRpc(4010, "processor_set_tasks_with_flavor")
	__BeforeRcvRpc(4010, "processor_set_tasks_with_flavor")

#if	defined(__MIG_check__Request__processor_set_tasks_with_flavor_t__defined)
	check_result = __MIG_check__Request__processor_set_tasks_with_flavor_t((RequestK *)InKP, (__RequestU *)In0UP, InTrailerP);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutKP, check_result); }
#endif	/* defined(__MIG_check__Request__processor_set_tasks_with_flavor_t__defined) */

#if	UseStaticTemplates
	OutKP->task_list = task_listTemplate;
#else	/* UseStaticTemplates */
#if	__MigKernelSpecificCode
	OutKP->task_list.disposition = 17;
#else
	OutKP->task_list.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutKP->task_list.deallocate =  FALSE;
	OutKP->task_list.type = MACH_MSG_OOL_PORTS_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = processor_set_tasks_with_flavor(convert_port_to_pset(InKP->Head.msgh_request_port), In0UP->flavor, &task_list, &OutUP->task_listCnt);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutKP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutKP->task_list.address = (void *)task_list;
	OutKP->task_list.count = OutUP->task_listCnt;


	OutUP->NDR = NDR_record;


	OutKP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutKP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutKP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(4010, "processor_set_tasks_with_flavor")
}



/* Description of this kernel subsystem, for use in direct RPC */
const struct processor_set_subsystem processor_set_subsystem = {
	processor_set_server_routine,
	4000,
	4011,
	(mach_msg_size_t)sizeof(union __ReplyUnion__processor_set_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xprocessor_set_statistics, 4, 0, 0, (mach_msg_size_t)sizeof(__Reply__processor_set_statistics_t)},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xprocessor_set_tasks, 3, 0, 1, (mach_msg_size_t)sizeof(__Reply__processor_set_tasks_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xprocessor_set_threads, 3, 0, 1, (mach_msg_size_t)sizeof(__Reply__processor_set_threads_t)},
		{0, 0, 0, 0, 0, 0},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xprocessor_set_stack_usage, 6, 0, 0, (mach_msg_size_t)sizeof(__Reply__processor_set_stack_usage_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xprocessor_set_info, 5, 0, 1, (mach_msg_size_t)sizeof(__Reply__processor_set_info_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_kern_routine_t) _Xprocessor_set_tasks_with_flavor, 4, 0, 1, (mach_msg_size_t)sizeof(__Reply__processor_set_tasks_with_flavor_t)},
	}
};

mig_external boolean_t processor_set_server
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

	if ((InHeadP->msgh_id > 4010) || (InHeadP->msgh_id < 4000) ||
	    ((routine = processor_set_subsystem.kroutine[InHeadP->msgh_id - 4000].kstub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, InDataP, InTrailerP, OutHeadP, OutDataP);
	return TRUE;
}

mig_external mig_kern_routine_t processor_set_server_routine
	(mach_msg_header_t *InHeadP)
{
	int msgh_id;

	msgh_id = InHeadP->msgh_id - 4000;

	if ((msgh_id > 10) || (msgh_id < 0))
		return 0;

	return processor_set_subsystem.kroutine[msgh_id].kstub_routine;
}
