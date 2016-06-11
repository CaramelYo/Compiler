	.text
	.globl main

idFunction:
	move $t0, $a0
	move $t1, $a1
	add $t2, $t1, $t0
	move $t3, $t2
	move $a0, $t3
	li $v0, 1
	syscall
	move $v0, $t3
	jr $ra
main:
	li $v0, 5
	syscall
	move $s0, $v0
	li $v0, 5
	syscall
	move $s1, $v0
	move $a0, $s0
	li $v0, 1
	syscall
	move $a0, $s1
	li $v0, 1
	syscall
	add $s2, $s0, $s1
	mul $s2, $s2, $s1
	move $s3, $s2
	move $a0, $s3
	li $v0, 1
	syscall
	div $s2, $s1, 1
	mul $s2, $s0, $s2
	sub $s2, $s1, $s2
	add $s2, $s0, $s2
	move $s3, $s2
	move $a0, $s3
	li $v0, 1
	syscall
	sgt $s2, $s0, $s1
	beq $s2, $0, else0
	sub $s2, $s0, $s1
	move $s3, $s2
	move $a0, $s3
	li $v0, 1
	syscall
	b endif0
else0:
	sub $s2, $s1, $s0
	move $s3, $s2
	move $a0, $s3
	li $v0, 1
	syscall
endif0:
	li $s4, 10
while1:
	sgt $s2, $s4, 0
	beq $s2, $0, endwhile1
	sub $s2, $s4, 1
	move $s4, $s2
	b while1
endwhile1:
	move $a0, $s4
	li $v0, 1
	syscall
	move $a0, $s1
	move $a1, $s0
	jal idFunction
	move $s2, $v0
	move $s3, $s2
	move $a0, $s3
	li $v0, 1
	syscall
	li $v0, 10
	syscall
