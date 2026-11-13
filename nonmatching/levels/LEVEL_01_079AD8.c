/* USA LEVEL_01.REL:0x079AD8, 104-byte candidate.
 * Measured pinned/gnu-ee-trial: 80 linked bytes; first differing word +0x0.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
typedef struct {void *a; unsigned char kind; unsigned char pad[3]; int b; int c; void *d; int e;} Record;
extern unsigned int D_1F6118;
extern Record D_23A4B0[16];
void func_079AD8(void *a,int b,void *d,int kind)
{
 if(D_1F6118<16) {
 Record *p=&D_23A4B0[D_1F6118++];
 p->kind=kind; p->a=a; p->b=b; p->c=0;p->d=d;p->e=0;
 }
}
