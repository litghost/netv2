#ifndef __DUMP_H
#define __DUMP_H

void dump_mem(unsigned int addr, unsigned int len);
void poke_mem(unsigned int addr, unsigned int data);
void help_memread(void);
void help_memwrite(void);

#endif