/* LEVEL_07:0x1AAE88 -- placement copy of LEVEL_04_1A5CE8.c. */
/* Pinned GNU EE: isolated exact 100 bytes. Two keys are checked before
 * appending at the independent global count; storage capacity is a contract. */
typedef struct {void *a; void *b; void *key; void *d;} Record;
extern Record D_3ACA28[];
extern unsigned int D_21D554;
void func_1AAE88(void *a,void *b,void *key,void *d)
{
 unsigned int i; Record *p;
 for(i=0;i<2;++i) if(D_3ACA28[i].key==key) return;
 p=&D_3ACA28[D_21D554++];
 p->b=b; p->a=a; p->key=key; p->d=d;
}
