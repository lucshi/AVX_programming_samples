.code
;                        C            A           B
;void asm_test (double *rcx, double *rdx, double *r8)
asm_add proc
	vmovupd zmm0, zmmword ptr [rdx]
	vaddpd zmm0, zmm0, zmmword ptr [r8]
	vmovupd zmmword ptr[rcx], zmm0
	ret
asm_add endp
end