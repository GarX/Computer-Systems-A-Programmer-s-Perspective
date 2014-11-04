movl %eax, (%esp)
movw (%eax), %dx
movb 0xFF, %bl
movb (%esp,%edx,4), %dh
pushl $0xFF
movw %dx, (%eax)
popl %edi
