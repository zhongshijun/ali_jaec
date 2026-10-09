
/tmp/jaec-inspect-20261009/jaec_x86.so:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .plt.got:

Disassembly of section .plt.sec:

Disassembly of section .text:

0000000000002860 <jaec_frontend_create@@JAEC_FRONTEND_1.0>:
    2860:	f3 0f 1e fa          	endbr64 
    2864:	41 55                	push   r13
    2866:	41 54                	push   r12
    2868:	55                   	push   rbp
    2869:	48 89 fd             	mov    rbp,rdi
    286c:	53                   	push   rbx
    286d:	48 83 ec 18          	sub    rsp,0x18
    2871:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    2878:	00 00 
    287a:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
    287f:	31 c0                	xor    eax,eax
    2881:	48 8d 3d b8 b6 01 00 	lea    rdi,[rip+0x1b6b8]        # 1df40 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1b400>
    2888:	e8 b3 e9 ff ff       	call   1240 <__tls_get_addr@plt>
    288d:	c6 80 00 00 00 00 00 	mov    BYTE PTR [rax+0x0],0x0
    2894:	48 85 ed             	test   rbp,rbp
    2897:	0f 84 13 01 00 00    	je     29b0 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x150>
    289d:	80 7d 00 00          	cmp    BYTE PTR [rbp+0x0],0x0
    28a1:	0f 84 09 01 00 00    	je     29b0 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x150>
    28a7:	48 89 e7             	mov    rdi,rsp
    28aa:	ba 80 8c 03 00       	mov    edx,0x38c80
    28af:	be 20 00 00 00       	mov    esi,0x20
    28b4:	48 89 c3             	mov    rbx,rax
    28b7:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
    28be:	00 
    28bf:	4c 8d a8 00 00 00 00 	lea    r13,[rax+0x0]
    28c6:	e8 25 ea ff ff       	call   12f0 <posix_memalign@plt>
    28cb:	85 c0                	test   eax,eax
    28cd:	0f 85 9d 00 00 00    	jne    2970 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x110>
    28d3:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
    28d7:	4d 85 e4             	test   r12,r12
    28da:	0f 84 90 00 00 00    	je     2970 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x110>
    28e0:	31 f6                	xor    esi,esi
    28e2:	ba 80 8c 03 00       	mov    edx,0x38c80
    28e7:	4c 89 e7             	mov    rdi,r12
    28ea:	e8 21 e9 ff ff       	call   1210 <memset@plt>
    28ef:	48 89 ef             	mov    rdi,rbp
    28f2:	e8 b9 24 00 00       	call   4db0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x2270>
    28f7:	49 89 04 24          	mov    QWORD PTR [r12],rax
    28fb:	48 89 c6             	mov    rsi,rax
    28fe:	48 85 c0             	test   rax,rax
    2901:	0f 84 21 01 00 00    	je     2a28 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x1c8>
    2907:	49 8d 7c 24 08       	lea    rdi,[r12+0x8]
    290c:	e8 7f 08 00 00       	call   3190 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x650>
    2911:	85 c0                	test   eax,eax
    2913:	0f 85 d7 00 00 00    	jne    29f0 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x190>
    2919:	bf 00 02 00 00       	mov    edi,0x200
    291e:	be a0 00 00 00       	mov    esi,0xa0
    2923:	e8 58 17 00 00       	call   4080 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1540>
    2928:	49 89 84 24 88 29 03 	mov    QWORD PTR [r12+0x32988],rax
    292f:	00 
    2930:	48 89 c7             	mov    rdi,rax
    2933:	48 85 c0             	test   rax,rax
    2936:	0f 84 b4 00 00 00    	je     29f0 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x190>
    293c:	49 8d b4 24 e8 89 03 	lea    rsi,[r12+0x389e8]
    2943:	00 
    2944:	e8 17 22 00 00       	call   4b60 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x2020>
    2949:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
    294e:	64 48 2b 04 25 28 00 	sub    rax,QWORD PTR fs:0x28
    2955:	00 00 
    2957:	0f 85 fc 00 00 00    	jne    2a59 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0x1f9>
    295d:	48 83 c4 18          	add    rsp,0x18
    2961:	4c 89 e0             	mov    rax,r12
    2964:	5b                   	pop    rbx
    2965:	5d                   	pop    rbp
    2966:	41 5c                	pop    r12
    2968:	41 5d                	pop    r13
    296a:	c3                   	ret    
    296b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
    2970:	48 8d 3d c9 b5 01 00 	lea    rdi,[rip+0x1b5c9]        # 1df40 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1b400>
    2977:	e8 c4 e8 ff ff       	call   1240 <__tls_get_addr@plt>
    297c:	66 0f 6f 05 dc 77 01 	movdqa xmm0,XMMWORD PTR [rip+0x177dc]        # 1a160 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17620>
    2983:	00 
    2984:	b9 64 00 00 00       	mov    ecx,0x64
    2989:	45 31 e4             	xor    r12d,r12d
    298c:	c7 80 10 00 00 00 61 	mov    DWORD PTR [rax+0x10],0x656c6961
    2993:	69 6c 65 
    2996:	66 89 88 14 00 00 00 	mov    WORD PTR [rax+0x14],cx
    299d:	0f 11 80 00 00 00 00 	movups XMMWORD PTR [rax+0x0],xmm0
    29a4:	eb a3                	jmp    2949 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0xe9>
    29a6:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
    29ad:	00 00 00 
    29b0:	48 8d 3d 89 b5 01 00 	lea    rdi,[rip+0x1b589]        # 1df40 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1b400>
    29b7:	e8 84 e8 ff ff       	call   1240 <__tls_get_addr@plt>
    29bc:	66 0f 6f 05 8c 77 01 	movdqa xmm0,XMMWORD PTR [rip+0x1778c]        # 1a150 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17610>
    29c3:	00 
    29c4:	be 65 64 00 00       	mov    esi,0x6465
    29c9:	45 31 e4             	xor    r12d,r12d
    29cc:	c7 80 10 00 00 00 71 	mov    DWORD PTR [rax+0x10],0x72697571
    29d3:	75 69 72 
    29d6:	66 89 b0 14 00 00 00 	mov    WORD PTR [rax+0x14],si
    29dd:	c6 80 16 00 00 00 00 	mov    BYTE PTR [rax+0x16],0x0
    29e4:	0f 11 80 00 00 00 00 	movups XMMWORD PTR [rax+0x0],xmm0
    29eb:	e9 59 ff ff ff       	jmp    2949 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0xe9>
    29f0:	66 0f 6f 05 68 77 01 	movdqa xmm0,XMMWORD PTR [rip+0x17768]        # 1a160 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17620>
    29f7:	00 
    29f8:	b8 64 00 00 00       	mov    eax,0x64
    29fd:	4c 89 e7             	mov    rdi,r12
    2a00:	45 31 e4             	xor    r12d,r12d
    2a03:	0f 11 83 00 00 00 00 	movups XMMWORD PTR [rbx+0x0],xmm0
    2a0a:	41 c7 45 10 61 69 6c 	mov    DWORD PTR [r13+0x10],0x656c6961
    2a11:	65 
    2a12:	66 41 89 45 14       	mov    WORD PTR [r13+0x14],ax
    2a17:	e8 c4 e8 ff ff       	call   12e0 <jaec_frontend_destroy@plt>
    2a1c:	e9 28 ff ff ff       	jmp    2949 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0xe9>
    2a21:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    2a28:	66 0f 6f 05 30 77 01 	movdqa xmm0,XMMWORD PTR [rip+0x17730]        # 1a160 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17620>
    2a2f:	00 
    2a30:	ba 64 00 00 00       	mov    edx,0x64
    2a35:	4c 89 e7             	mov    rdi,r12
    2a38:	45 31 e4             	xor    r12d,r12d
    2a3b:	0f 11 83 00 00 00 00 	movups XMMWORD PTR [rbx+0x0],xmm0
    2a42:	41 c7 45 10 61 69 6c 	mov    DWORD PTR [r13+0x10],0x656c6961
    2a49:	65 
    2a4a:	66 41 89 55 14       	mov    WORD PTR [r13+0x14],dx
    2a4f:	e8 5c e7 ff ff       	call   11b0 <free@plt>
    2a54:	e9 f0 fe ff ff       	jmp    2949 <jaec_frontend_create@@JAEC_FRONTEND_1.0+0xe9>
    2a59:	e8 a2 e7 ff ff       	call   1200 <__stack_chk_fail@plt>

Disassembly of section .fini:
