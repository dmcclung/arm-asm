.global _start

_start:
        mov x0, #1
        ldr x1, =hello
        mov x2, #22

        mov x8, #64
        svc #0

        mov x8, #93
        mov x0, #0
        svc #0

.data
hello: .ascii "Hello ARM64 assembly!\n"