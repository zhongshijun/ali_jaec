
/tmp/jaec-inspect-20261009/jaec_x86.so:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .plt.got:

Disassembly of section .plt.sec:

Disassembly of section .text:

0000000000002b40 <jaec_frontend_process@@JAEC_FRONTEND_1.0>:
    2b40:	f3 0f 1e fa          	endbr64 
    2b44:	41 57                	push   r15
    2b46:	41 56                	push   r14
    2b48:	41 55                	push   r13
    2b4a:	41 54                	push   r12
    2b4c:	55                   	push   rbp
    2b4d:	53                   	push   rbx
    2b4e:	48 83 ec 48          	sub    rsp,0x48
    2b52:	89 4c 24 38          	mov    DWORD PTR [rsp+0x38],ecx
    2b56:	48 85 ff             	test   rdi,rdi
    2b59:	0f 84 b7 05 00 00    	je     3116 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x5d6>
    2b5f:	48 85 f6             	test   rsi,rsi
    2b62:	0f 84 ae 05 00 00    	je     3116 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x5d6>
    2b68:	48 85 d2             	test   rdx,rdx
    2b6b:	49 89 d4             	mov    r12,rdx
    2b6e:	4c 89 c5             	mov    rbp,r8
    2b71:	0f 94 c0             	sete   al
    2b74:	4d 85 c0             	test   r8,r8
    2b77:	0f 94 c2             	sete   dl
    2b7a:	08 d0                	or     al,dl
    2b7c:	0f 85 94 05 00 00    	jne    3116 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x5d6>
    2b82:	48 89 fb             	mov    rbx,rdi
    2b85:	89 cf                	mov    edi,ecx
    2b87:	85 c9                	test   ecx,ecx
    2b89:	0f 8e 87 05 00 00    	jle    3116 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x5d6>
    2b8f:	48 63 c1             	movsxd rax,ecx
    2b92:	89 ca                	mov    edx,ecx
    2b94:	48 69 c0 67 66 66 66 	imul   rax,rax,0x66666667
    2b9b:	c1 fa 1f             	sar    edx,0x1f
    2b9e:	48 c1 f8 26          	sar    rax,0x26
    2ba2:	29 d0                	sub    eax,edx
    2ba4:	8d 04 80             	lea    eax,[rax+rax*4]
    2ba7:	c1 e0 05             	shl    eax,0x5
    2baa:	29 c7                	sub    edi,eax
    2bac:	89 7c 24 3c          	mov    DWORD PTR [rsp+0x3c],edi
    2bb0:	0f 85 60 05 00 00    	jne    3116 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x5d6>
    2bb6:	48 8d 83 a0 39 03 00 	lea    rax,[rbx+0x339a0]
    2bbd:	c7 44 24 04 00 00 00 	mov    DWORD PTR [rsp+0x4],0x0
    2bc4:	00 
    2bc5:	49 89 f6             	mov    r14,rsi
    2bc8:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
    2bcd:	48 8d 83 a0 29 03 00 	lea    rax,[rbx+0x329a0]
    2bd4:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
    2bd9:	e9 da 01 00 00       	jmp    2db8 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x278>
    2bde:	66 90                	xchg   ax,ax
    2be0:	8b 83 94 29 03 00    	mov    eax,DWORD PTR [rbx+0x32994]
    2be6:	85 c0                	test   eax,eax
    2be8:	74 1b                	je     2c05 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0xc5>
    2bea:	8b 83 98 29 03 00    	mov    eax,DWORD PTR [rbx+0x32998]
    2bf0:	3d 2b 01 00 00       	cmp    eax,0x12b
    2bf5:	0f 86 55 04 00 00    	jbe    3050 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x510>
    2bfb:	c7 83 94 29 03 00 00 	mov    DWORD PTR [rbx+0x32994],0x0
    2c02:	00 00 00 
    2c05:	44 8b ab 68 8c 03 00 	mov    r13d,DWORD PTR [rbx+0x38c68]
    2c0c:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
    2c11:	4c 89 e2             	mov    rdx,r12
    2c14:	44 89 ee             	mov    esi,r13d
    2c17:	e8 94 f7 ff ff       	call   23b0 <posix_memalign@plt+0x10c0>
    2c1c:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
    2c21:	44 89 ee             	mov    esi,r13d
    2c24:	4c 89 f2             	mov    rdx,r14
    2c27:	41 81 c5 a0 00 00 00 	add    r13d,0xa0
    2c2e:	e8 7d f7 ff ff       	call   23b0 <posix_memalign@plt+0x10c0>
    2c33:	44 89 e8             	mov    eax,r13d
    2c36:	c1 f8 1f             	sar    eax,0x1f
    2c39:	c1 e8 17             	shr    eax,0x17
    2c3c:	41 8d 74 05 00       	lea    esi,[r13+rax*1+0x0]
    2c41:	81 e6 ff 01 00 00    	and    esi,0x1ff
    2c47:	29 c6                	sub    esi,eax
    2c49:	80 bb 90 29 03 00 00 	cmp    BYTE PTR [rbx+0x32990],0x0
    2c50:	89 b3 68 8c 03 00    	mov    DWORD PTR [rbx+0x38c68],esi
    2c56:	0f 84 b4 03 00 00    	je     3010 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x4d0>
    2c5c:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
    2c61:	48 63 f6             	movsxd rsi,esi
    2c64:	48 8b 7b 18          	mov    rdi,QWORD PTR [rbx+0x18]
    2c68:	4c 8d ab a8 71 03 00 	lea    r13,[rbx+0x371a8]
    2c6f:	48 c1 e6 02          	shl    rsi,0x2
    2c73:	83 bb 94 29 03 00 01 	cmp    DWORD PTR [rbx+0x32994],0x1
    2c7a:	4c 8d 8b a0 51 03 00 	lea    r9,[rbx+0x351a0]
    2c81:	4c 8d 1c 30          	lea    r11,[rax+rsi*1]
    2c85:	4c 8d bb a0 49 03 00 	lea    r15,[rbx+0x349a0]
    2c8c:	0f 84 7e 01 00 00    	je     2e10 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x2d0>
    2c92:	4c 89 e9             	mov    rcx,r13
    2c95:	4c 89 ca             	mov    rdx,r9
    2c98:	4c 89 de             	mov    rsi,r11
    2c9b:	4c 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],r9
    2ca0:	e8 db 15 00 00       	call   4280 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1740>
    2ca5:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
    2caa:	4c 89 f9             	mov    rcx,r15
    2cad:	4c 89 ee             	mov    rsi,r13
    2cb0:	48 8b bb 88 29 03 00 	mov    rdi,QWORD PTR [rbx+0x32988]
    2cb7:	44 8b 83 6c 8c 03 00 	mov    r8d,DWORD PTR [rbx+0x38c6c]
    2cbe:	e8 0d 1e 00 00       	call   4ad0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1f90>
    2cc3:	4c 63 83 6c 8c 03 00 	movsxd r8,DWORD PTR [rbx+0x38c6c]
    2cca:	48 8d 05 af b3 01 00 	lea    rax,[rip+0x1b3af]        # 1e080 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1b540>
    2cd1:	b9 00 02 00 00       	mov    ecx,0x200
    2cd6:	4c 8d ab e8 89 03 00 	lea    r13,[rbx+0x389e8]
    2cdd:	4d 89 c2             	mov    r10,r8
    2ce0:	44 29 c1             	sub    ecx,r8d
    2ce3:	49 c1 e0 02          	shl    r8,0x2
    2ce7:	48 8b 80 98 00 00 00 	mov    rax,QWORD PTR [rax+0x98]
    2cee:	4b 8d 3c 07          	lea    rdi,[r15+r8*1]
    2cf2:	81 f9 9f 00 00 00    	cmp    ecx,0x9f
    2cf8:	0f 8f f2 00 00 00    	jg     2df0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x2b0>
    2cfe:	4c 63 c9             	movsxd r9,ecx
    2d01:	4e 8d 1c 8d 00 00 00 	lea    r11,[r9*4+0x0]
    2d08:	00 
    2d09:	48 85 c0             	test   rax,rax
    2d0c:	0f 84 2e 02 00 00    	je     2f40 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x400>
    2d12:	4c 89 44 24 30       	mov    QWORD PTR [rsp+0x30],r8
    2d17:	48 89 ea             	mov    rdx,rbp
    2d1a:	4c 89 ee             	mov    rsi,r13
    2d1d:	4c 89 5c 24 28       	mov    QWORD PTR [rsp+0x28],r11
    2d22:	4c 89 4c 24 20       	mov    QWORD PTR [rsp+0x20],r9
    2d27:	44 89 54 24 18       	mov    DWORD PTR [rsp+0x18],r10d
    2d2c:	ff d0                	call   rax
    2d2e:	44 8b 54 24 18       	mov    r10d,DWORD PTR [rsp+0x18]
    2d33:	4c 8b 4c 24 20       	mov    r9,QWORD PTR [rsp+0x20]
    2d38:	4c 8b 5c 24 28       	mov    r11,QWORD PTR [rsp+0x28]
    2d3d:	4c 8b 44 24 30       	mov    r8,QWORD PTR [rsp+0x30]
    2d42:	48 8d 05 37 b3 01 00 	lea    rax,[rip+0x1b337]        # 1e080 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1b540>
    2d49:	4a 8d 54 4d 00       	lea    rdx,[rbp+r9*2+0x0]
    2d4e:	4b 8d 74 1d 00       	lea    rsi,[r13+r11*1+0x0]
    2d53:	41 8d 8a a0 fe ff ff 	lea    ecx,[r10-0x160]
    2d5a:	48 8b 80 98 00 00 00 	mov    rax,QWORD PTR [rax+0x98]
    2d61:	48 85 c0             	test   rax,rax
    2d64:	0f 84 1e 01 00 00    	je     2e88 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x348>
    2d6a:	4c 89 ff             	mov    rdi,r15
    2d6d:	ff d0                	call   rax
    2d6f:	8b 83 6c 8c 03 00    	mov    eax,DWORD PTR [rbx+0x38c6c]
    2d75:	05 a0 00 00 00       	add    eax,0xa0
    2d7a:	99                   	cdq    
    2d7b:	c1 ea 17             	shr    edx,0x17
    2d7e:	01 d0                	add    eax,edx
    2d80:	25 ff 01 00 00       	and    eax,0x1ff
    2d85:	29 d0                	sub    eax,edx
    2d87:	89 83 6c 8c 03 00    	mov    DWORD PTR [rbx+0x38c6c],eax
    2d8d:	81 44 24 04 a0 00 00 	add    DWORD PTR [rsp+0x4],0xa0
    2d94:	00 
    2d95:	49 81 c4 40 01 00 00 	add    r12,0x140
    2d9c:	8b 44 24 04          	mov    eax,DWORD PTR [rsp+0x4]
    2da0:	48 81 c5 40 01 00 00 	add    rbp,0x140
    2da7:	49 81 c6 40 01 00 00 	add    r14,0x140
    2dae:	39 44 24 38          	cmp    DWORD PTR [rsp+0x38],eax
    2db2:	0f 8e 9f 03 00 00    	jle    3157 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x617>
    2db8:	ba 40 01 00 00       	mov    edx,0x140
    2dbd:	48 8d 35 3c 72 01 00 	lea    rsi,[rip+0x1723c]        # 1a000 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x174c0>
    2dc4:	4c 89 e7             	mov    rdi,r12
    2dc7:	e8 64 e4 ff ff       	call   1230 <memcmp@plt>
    2dcc:	85 c0                	test   eax,eax
    2dce:	0f 84 0c fe ff ff    	je     2be0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0xa0>
    2dd4:	48 8b 05 a5 73 01 00 	mov    rax,QWORD PTR [rip+0x173a5]        # 1a180 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17640>
    2ddb:	48 89 83 94 29 03 00 	mov    QWORD PTR [rbx+0x32994],rax
    2de2:	e9 1e fe ff ff       	jmp    2c05 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0xc5>
    2de7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
    2dee:	00 00 
    2df0:	48 85 c0             	test   rax,rax
    2df3:	0f 84 67 02 00 00    	je     3060 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x520>
    2df9:	b9 a0 00 00 00       	mov    ecx,0xa0
    2dfe:	48 89 ea             	mov    rdx,rbp
    2e01:	4c 89 ee             	mov    rsi,r13
    2e04:	ff d0                	call   rax
    2e06:	e9 64 ff ff ff       	jmp    2d6f <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x22f>
    2e0b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
    2e10:	4c 8d 93 a0 69 03 00 	lea    r10,[rbx+0x369a0]
    2e17:	48 03 74 24 10       	add    rsi,QWORD PTR [rsp+0x10]
    2e1c:	4c 89 da             	mov    rdx,r11
    2e1f:	4c 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],r9
    2e24:	4d 89 d0             	mov    r8,r10
    2e27:	48 8d 8b a0 59 03 00 	lea    rcx,[rbx+0x359a0]
    2e2e:	4c 89 54 24 20       	mov    QWORD PTR [rsp+0x20],r10
    2e33:	e8 e8 15 00 00       	call   4420 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x18e0>
    2e38:	4c 8d 9b e0 81 03 00 	lea    r11,[rbx+0x381e0]
    2e3f:	48 8d 7b 08          	lea    rdi,[rbx+0x8]
    2e43:	4c 89 ea             	mov    rdx,r13
    2e46:	48 8b 74 24 20       	mov    rsi,QWORD PTR [rsp+0x20]
    2e4b:	48 8d 8b c0 79 03 00 	lea    rcx,[rbx+0x379c0]
    2e52:	4d 89 d8             	mov    r8,r11
    2e55:	4c 89 5c 24 18       	mov    QWORD PTR [rsp+0x18],r11
    2e5a:	e8 d1 04 00 00       	call   3330 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x7f0>
    2e5f:	48 8b bb 88 29 03 00 	mov    rdi,QWORD PTR [rbx+0x32988]
    2e66:	48 8b 54 24 28       	mov    rdx,QWORD PTR [rsp+0x28]
    2e6b:	4c 89 f9             	mov    rcx,r15
    2e6e:	44 8b 83 6c 8c 03 00 	mov    r8d,DWORD PTR [rbx+0x38c6c]
    2e75:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
    2e7a:	e8 51 1c 00 00       	call   4ad0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1f90>
    2e7f:	e9 3f fe ff ff       	jmp    2cc3 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x183>
    2e84:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
    2e88:	41 8d ba 9f fe ff ff 	lea    edi,[r10-0x161]
    2e8f:	85 c9                	test   ecx,ecx
    2e91:	7f 49                	jg     2edc <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x39c>
    2e93:	e9 88 00 00 00       	jmp    2f20 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x3e0>
    2e98:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
    2e9f:	00 
    2ea0:	f3 0f 59 05 e0 72 01 	mulss  xmm0,DWORD PTR [rip+0x172e0]        # 1a188 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17648>
    2ea7:	00 
    2ea8:	b9 ff 7f 00 00       	mov    ecx,0x7fff
    2ead:	0f 2f 05 d8 72 01 00 	comiss xmm0,DWORD PTR [rip+0x172d8]        # 1a18c <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1764c>
    2eb4:	73 16                	jae    2ecc <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x38c>
    2eb6:	f3 0f 10 1d d2 72 01 	movss  xmm3,DWORD PTR [rip+0x172d2]        # 1a190 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17650>
    2ebd:	00 
    2ebe:	0f 2f d8             	comiss xmm3,xmm0
    2ec1:	0f 83 a3 02 00 00    	jae    316a <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x62a>
    2ec7:	f3 48 0f 2d c8       	cvtss2si rcx,xmm0
    2ecc:	66 89 0c 42          	mov    WORD PTR [rdx+rax*2],cx
    2ed0:	48 8d 48 01          	lea    rcx,[rax+0x1]
    2ed4:	48 39 c7             	cmp    rdi,rax
    2ed7:	74 47                	je     2f20 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x3e0>
    2ed9:	48 89 c8             	mov    rax,rcx
    2edc:	f3 0f 10 84 83 a0 49 	movss  xmm0,DWORD PTR [rbx+rax*4+0x349a0]
    2ee3:	03 00 
    2ee5:	f3 0f 59 04 86       	mulss  xmm0,DWORD PTR [rsi+rax*4]
    2eea:	66 0f 7e c1          	movd   ecx,xmm0
    2eee:	66 41 0f 7e c1       	movd   r9d,xmm0
    2ef3:	81 e1 00 00 80 7f    	and    ecx,0x7f800000
    2ef9:	81 f9 00 00 80 7f    	cmp    ecx,0x7f800000
    2eff:	75 9f                	jne    2ea0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x360>
    2f01:	31 c9                	xor    ecx,ecx
    2f03:	41 81 e1 ff ff 7f 00 	and    r9d,0x7fffff
    2f0a:	74 94                	je     2ea0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x360>
    2f0c:	66 89 0c 42          	mov    WORD PTR [rdx+rax*2],cx
    2f10:	48 8d 48 01          	lea    rcx,[rax+0x1]
    2f14:	48 39 c7             	cmp    rdi,rax
    2f17:	75 c0                	jne    2ed9 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x399>
    2f19:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    2f20:	49 8d 90 80 fa ff ff 	lea    rdx,[r8-0x580]
    2f27:	31 f6                	xor    esi,esi
    2f29:	4c 89 ff             	mov    rdi,r15
    2f2c:	e8 df e2 ff ff       	call   1210 <memset@plt>
    2f31:	e9 39 fe ff ff       	jmp    2d6f <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x22f>
    2f36:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
    2f3d:	00 00 00 
    2f40:	f3 0f 10 0d 40 72 01 	movss  xmm1,DWORD PTR [rip+0x17240]        # 1a188 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17648>
    2f47:	00 
    2f48:	f3 0f 10 15 40 72 01 	movss  xmm2,DWORD PTR [rip+0x17240]        # 1a190 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17650>
    2f4f:	00 
    2f50:	85 c9                	test   ecx,ecx
    2f52:	7f 3a                	jg     2f8e <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x44e>
    2f54:	eb 7a                	jmp    2fd0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x490>
    2f56:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
    2f5d:	00 00 00 
    2f60:	f3 0f 59 c1          	mulss  xmm0,xmm1
    2f64:	ba ff 7f 00 00       	mov    edx,0x7fff
    2f69:	0f 2f 05 1c 72 01 00 	comiss xmm0,DWORD PTR [rip+0x1721c]        # 1a18c <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1764c>
    2f70:	73 0e                	jae    2f80 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x440>
    2f72:	0f 2f d0             	comiss xmm2,xmm0
    2f75:	0f 83 f9 01 00 00    	jae    3174 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x634>
    2f7b:	f3 48 0f 2d d0       	cvtss2si rdx,xmm0
    2f80:	66 89 54 45 00       	mov    WORD PTR [rbp+rax*2+0x0],dx
    2f85:	48 83 c0 01          	add    rax,0x1
    2f89:	49 39 c1             	cmp    r9,rax
    2f8c:	74 42                	je     2fd0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x490>
    2f8e:	f3 0f 10 04 87       	movss  xmm0,DWORD PTR [rdi+rax*4]
    2f93:	f3 0f 59 84 83 e8 89 	mulss  xmm0,DWORD PTR [rbx+rax*4+0x389e8]
    2f9a:	03 00 
    2f9c:	66 0f 7e c2          	movd   edx,xmm0
    2fa0:	66 0f 7e c1          	movd   ecx,xmm0
    2fa4:	81 e2 00 00 80 7f    	and    edx,0x7f800000
    2faa:	81 fa 00 00 80 7f    	cmp    edx,0x7f800000
    2fb0:	75 ae                	jne    2f60 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x420>
    2fb2:	31 d2                	xor    edx,edx
    2fb4:	81 e1 ff ff 7f 00    	and    ecx,0x7fffff
    2fba:	74 a4                	je     2f60 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x420>
    2fbc:	66 89 54 45 00       	mov    WORD PTR [rbp+rax*2+0x0],dx
    2fc1:	48 83 c0 01          	add    rax,0x1
    2fc5:	49 39 c1             	cmp    r9,rax
    2fc8:	75 c4                	jne    2f8e <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x44e>
    2fca:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    2fd0:	4c 89 da             	mov    rdx,r11
    2fd3:	31 f6                	xor    esi,esi
    2fd5:	4c 89 44 24 30       	mov    QWORD PTR [rsp+0x30],r8
    2fda:	4c 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],r9
    2fdf:	44 89 54 24 20       	mov    DWORD PTR [rsp+0x20],r10d
    2fe4:	4c 89 5c 24 18       	mov    QWORD PTR [rsp+0x18],r11
    2fe9:	e8 22 e2 ff ff       	call   1210 <memset@plt>
    2fee:	4c 8b 5c 24 18       	mov    r11,QWORD PTR [rsp+0x18]
    2ff3:	44 8b 54 24 20       	mov    r10d,DWORD PTR [rsp+0x20]
    2ff8:	4c 8b 4c 24 28       	mov    r9,QWORD PTR [rsp+0x28]
    2ffd:	4c 8b 44 24 30       	mov    r8,QWORD PTR [rsp+0x30]
    3002:	e9 3b fd ff ff       	jmp    2d42 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x202>
    3007:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
    300e:	00 00 
    3010:	48 8d 7d 08          	lea    rdi,[rbp+0x8]
    3014:	48 89 e9             	mov    rcx,rbp
    3017:	31 c0                	xor    eax,eax
    3019:	48 c7 45 00 00 00 00 	mov    QWORD PTR [rbp+0x0],0x0
    3020:	00 
    3021:	48 c7 85 38 01 00 00 	mov    QWORD PTR [rbp+0x138],0x0
    3028:	00 00 00 00 
    302c:	48 83 e7 f8          	and    rdi,0xfffffffffffffff8
    3030:	48 29 f9             	sub    rcx,rdi
    3033:	81 c1 40 01 00 00    	add    ecx,0x140
    3039:	c1 e9 03             	shr    ecx,0x3
    303c:	f3 48 ab             	rep stos QWORD PTR es:[rdi],rax
    303f:	c6 83 90 29 03 00 01 	mov    BYTE PTR [rbx+0x32990],0x1
    3046:	e9 42 fd ff ff       	jmp    2d8d <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x24d>
    304b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
    3050:	83 c0 01             	add    eax,0x1
    3053:	89 83 98 29 03 00    	mov    DWORD PTR [rbx+0x32998],eax
    3059:	e9 a7 fb ff ff       	jmp    2c05 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0xc5>
    305e:	66 90                	xchg   ax,ax
    3060:	f3 0f 10 0d 20 71 01 	movss  xmm1,DWORD PTR [rip+0x17120]        # 1a188 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17648>
    3067:	00 
    3068:	f3 0f 10 15 20 71 01 	movss  xmm2,DWORD PTR [rip+0x17120]        # 1a190 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17650>
    306f:	00 
    3070:	31 c0                	xor    eax,eax
    3072:	eb 35                	jmp    30a9 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x569>
    3074:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
    3078:	f3 0f 59 c1          	mulss  xmm0,xmm1
    307c:	ba ff 7f 00 00       	mov    edx,0x7fff
    3081:	0f 2f 05 04 71 01 00 	comiss xmm0,DWORD PTR [rip+0x17104]        # 1a18c <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1764c>
    3088:	73 0e                	jae    3098 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x558>
    308a:	0f 2f d0             	comiss xmm2,xmm0
    308d:	0f 83 eb 00 00 00    	jae    317e <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x63e>
    3093:	f3 48 0f 2d d0       	cvtss2si rdx,xmm0
    3098:	66 89 54 45 00       	mov    WORD PTR [rbp+rax*2+0x0],dx
    309d:	48 83 c0 01          	add    rax,0x1
    30a1:	48 3d a0 00 00 00    	cmp    rax,0xa0
    30a7:	74 37                	je     30e0 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x5a0>
    30a9:	f3 0f 10 04 87       	movss  xmm0,DWORD PTR [rdi+rax*4]
    30ae:	f3 0f 59 84 83 e8 89 	mulss  xmm0,DWORD PTR [rbx+rax*4+0x389e8]
    30b5:	03 00 
    30b7:	66 0f 7e c2          	movd   edx,xmm0
    30bb:	66 0f 7e c1          	movd   ecx,xmm0
    30bf:	81 e2 00 00 80 7f    	and    edx,0x7f800000
    30c5:	81 fa 00 00 80 7f    	cmp    edx,0x7f800000
    30cb:	75 ab                	jne    3078 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x538>
    30cd:	31 d2                	xor    edx,edx
    30cf:	81 e1 ff ff 7f 00    	and    ecx,0x7fffff
    30d5:	75 c1                	jne    3098 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x558>
    30d7:	eb 9f                	jmp    3078 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x538>
    30d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    30e0:	48 8d 57 08          	lea    rdx,[rdi+0x8]
    30e4:	48 c7 07 00 00 00 00 	mov    QWORD PTR [rdi],0x0
    30eb:	31 c0                	xor    eax,eax
    30ed:	48 c7 87 78 02 00 00 	mov    QWORD PTR [rdi+0x278],0x0
    30f4:	00 00 00 00 
    30f8:	48 83 e2 f8          	and    rdx,0xfffffffffffffff8
    30fc:	48 29 d7             	sub    rdi,rdx
    30ff:	48 89 f9             	mov    rcx,rdi
    3102:	48 89 d7             	mov    rdi,rdx
    3105:	81 c1 80 02 00 00    	add    ecx,0x280
    310b:	c1 e9 03             	shr    ecx,0x3
    310e:	f3 48 ab             	rep stos QWORD PTR es:[rdi],rax
    3111:	e9 59 fc ff ff       	jmp    2d6f <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x22f>
    3116:	48 8d 3d 23 ae 01 00 	lea    rdi,[rip+0x1ae23]        # 1df40 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x1b400>
    311d:	e8 1e e1 ff ff       	call   1240 <__tls_get_addr@plt>
    3122:	66 0f 6f 05 46 70 01 	movdqa xmm0,XMMWORD PTR [rip+0x17046]        # 1a170 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x17630>
    3129:	00 
    312a:	b9 73 00 00 00       	mov    ecx,0x73
    312f:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [rsp+0x3c],0xffffffff
    3136:	ff 
    3137:	48 8d 90 00 00 00 00 	lea    rdx,[rax+0x0]
    313e:	0f 11 80 00 00 00 00 	movups XMMWORD PTR [rax+0x0],xmm0
    3145:	48 b8 61 72 67 75 6d 	movabs rax,0x746e656d75677261
    314c:	65 6e 74 
    314f:	48 89 42 10          	mov    QWORD PTR [rdx+0x10],rax
    3153:	66 89 4a 18          	mov    WORD PTR [rdx+0x18],cx
    3157:	8b 44 24 3c          	mov    eax,DWORD PTR [rsp+0x3c]
    315b:	48 83 c4 48          	add    rsp,0x48
    315f:	5b                   	pop    rbx
    3160:	5d                   	pop    rbp
    3161:	41 5c                	pop    r12
    3163:	41 5d                	pop    r13
    3165:	41 5e                	pop    r14
    3167:	41 5f                	pop    r15
    3169:	c3                   	ret    
    316a:	b9 00 80 ff ff       	mov    ecx,0xffff8000
    316f:	e9 58 fd ff ff       	jmp    2ecc <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x38c>
    3174:	ba 00 80 ff ff       	mov    edx,0xffff8000
    3179:	e9 02 fe ff ff       	jmp    2f80 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x440>
    317e:	ba 00 80 ff ff       	mov    edx,0xffff8000
    3183:	e9 10 ff ff ff       	jmp    3098 <jaec_frontend_process@@JAEC_FRONTEND_1.0+0x558>

Disassembly of section .fini:
