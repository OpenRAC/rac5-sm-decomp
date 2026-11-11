/* LEVEL_24:0x19A9F8 -- placement copy of LEVEL_01_1C4940.c: searches a pointer table for a matching item. */
typedef struct SC { char pad_00[0x45]; unsigned char count; char pad_46[0x0E]; void **items; } SC;
extern int func_07E278(void *, void *);
void *func_19A9F8(SC *c, void *key){ unsigned int i; void **p = c->items; for (i = 0; i < c->count; i++) { void *it = p[i]; if (it && func_07E278(it, key)) return it; } return 0; }
