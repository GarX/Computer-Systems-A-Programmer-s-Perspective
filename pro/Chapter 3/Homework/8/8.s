movl 8(%ebp), %eax
sal $2, %eax
movl 12(%ebp), %ecx
sar %cl, %eax
