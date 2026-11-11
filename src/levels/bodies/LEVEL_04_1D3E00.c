/* LEVEL_04:0x1D3E00 -- placement copy of LEVEL_01_1C4940.c: searches a pointer table for a matching item. */
typedef struct SC { char pad_00[0x45]; unsigned char count; char pad_46[0x0E]; void **items; } SC;
extern int func_087C38(void *, void *);
void *func_1D3E00(SC *c, void *key){ unsigned int i; void **p = c->items; for (i = 0; i < c->count; i++) { void *it = p[i]; if (it && func_087C38(it, key)) return it; } return 0; }
