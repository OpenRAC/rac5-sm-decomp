/* LEVEL_18:0x16E080 -- placement copy of LEVEL_04_1A5CE8.c. */
/* Pinned GNU EE: isolated exact 100 bytes. Two keys are checked before
 * appending at the independent global count; storage capacity is a contract. */
typedef struct {void *a; void *b; void *key; void *d;} Record;
extern Record D_2E5868[];
extern unsigned int D_1BF614;
void func_16E080(void *a,void *b,void *key,void *d)
{
 unsigned int i; Record *p;
 for(i=0;i<2;++i) if(D_2E5868[i].key==key) return;
 p=&D_2E5868[D_1BF614++];
 p->b=b; p->a=a; p->key=key; p->d=d;
}
