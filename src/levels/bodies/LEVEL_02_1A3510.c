/* LEVEL_02:0x1A3510 -- clears a word, bumps a byte counter, and compares it with a limit field. */
typedef struct T { char p0[0x14]; unsigned short lim; } T; typedef struct C { T *t; char p0[0xC]; int w; char p1[0x8]; unsigned char n; } C; typedef struct O { char p0[0x54]; C *c; } O;
int func_1A3510(O *o){ C *c = o->c; c->w = 0; c->n++; return c->n < (unsigned int)c->t->lim; }
