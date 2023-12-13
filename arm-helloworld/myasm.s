.section .text
.global _start

_start:
    mov r1, #5
    mov r2, #6
    b mylabel

result:
    mov r0, r4
    b _exit

mylabel:
    add r4, r1, r2
    b result

_exit:
    mov r7, #1
    svc #0
