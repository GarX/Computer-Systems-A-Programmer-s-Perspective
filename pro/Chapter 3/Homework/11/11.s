movl 8(%ebp), %edx
xorl %edx, %edx
divl 12(%ebp)
movl %eax, 4(%esp)
movl %edx, (%esp)
