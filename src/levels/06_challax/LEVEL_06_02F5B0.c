/* LEVEL_06:0x02F5B0 -- placement copy of LEVEL_01_0311D0.c. */
typedef struct { float x,y,z,w; } Vec4;
extern void func_018B30(Vec4 *);
extern int func_02F408(void *,void *,void *,unsigned char,float,float,int,Vec4 *);
int func_02F5B0(void *a,void *b,void *c,int d,float f,float g,int e) {
    Vec4 v;
    unsigned char k=d;
    func_018B30(&v);
    return func_02F408(a,b,c,k,f,g,e,&v);
}
