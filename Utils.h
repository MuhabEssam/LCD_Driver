#ifndef UTILS_H_
#define UTILS_H_
#define SETBIT(PORT,BIT) PORT |=(1<<BIT)
#define CLEARBIT(PORT,BIT) PORT &=~(1<<BIT)
#define TOGGLEBIT(PORT,BIT) PORT^=(1<<BIT)
#define GETBIT(PORT,BIT) ((PORT>>BIT)&1)
#define SETBITVALUE(PORT,BIT,VALUE) (VALUE==1)?(PORT |=(1<<BIT)):(PORT &=~(1<<BIT))
#endif /* UTILS_H_ */
