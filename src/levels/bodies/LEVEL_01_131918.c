/* LEVEL_01:0x131918 -- calls each queued callback once with its paired value, then clears the count. */
typedef struct { unsigned int count; void (*cb[32])(unsigned int); unsigned int val[32]; } L;
void func_131918(L *l){ unsigned int i; for (i = 0; i < l->count; i++) l->cb[i](l->val[i]); l->count = 0; }
