/* Pinned GNU EE: isolated exact 100 bytes. Two keys are checked before
 * appending at the independent global count; storage capacity is a contract. */
typedef struct {void *a; void *b; void *key; void *d;} Record;
extern Record D_3B1B18[];
extern unsigned int D_222064;
void func_1A5CE8(void *a,void *b,void *key,void *d)
{
 unsigned int i; Record *p;
 for(i=0;i<2;++i) if(D_3B1B18[i].key==key) return;
 p=&D_3B1B18[D_222064++];
 p->b=b; p->a=a; p->key=key; p->d=d;
}
