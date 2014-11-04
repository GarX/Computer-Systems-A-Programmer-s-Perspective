movb $0xF,(%bl)             ; %bl is 8 bits and cannot refer to 32 bits address
movl %ax,(%esp)             ; %ax is 16 bits and movl is used for 32 bits
movw (%eax), 4(%esp)        ; memory to memory movment is not accepted
movb %ah,%sh                ; %sh is not a invalid register
movl %eax,$0x123            ; immidiate number cannot be the destnation
movl %eax,%dx               ; %dx is 16 bits and movl is used for 32 bits
movb %si,8(%ebp)            ; %si is 16 bits and movb is used for 8 bits
