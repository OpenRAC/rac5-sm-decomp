/* LEVEL_01:0x1C4940 -- searches a pointer table for a matching item. */
typedef struct SC { char pad_00[0x45]; unsigned char count; char pad_46[0x0E]; void **items; } SC;
extern int func_084708(void *, void *);
void *func_1C4940(SC *c, void *key){ unsigned int i; void **p = c->items; for (i = 0; i < c->count; i++) { void *it = p[i]; if (it && func_084708(it, key)) return it; } return 0; }
