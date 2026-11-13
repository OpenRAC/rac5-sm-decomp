/* LEVEL_09:0x18DA50 -- placement copy of LEVEL_04_1A5CE8.c. */
/* Pinned GNU EE: isolated exact 100 bytes. Two keys are checked before
 * appending at the independent global count; storage capacity is a contract. */
typedef struct {void *a; void *b; void *key; void *d;} Record;
extern Record D_37E940[];
extern unsigned int D_1F278C;
void func_18DA50(void *a,void *b,void *key,void *d)
{
 unsigned int i; Record *p;
 for(i=0;i<2;++i) if(D_37E940[i].key==key) return;
 p=&D_37E940[D_1F278C++];
 p->b=b; p->a=a; p->key=key; p->d=d;
}
