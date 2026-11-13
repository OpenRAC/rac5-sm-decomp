/* LEVEL_04:0x030C50 -- placement copy of LEVEL_01_0311D0.c. */
typedef struct { float x,y,z,w; } Vec4;
extern void func_019F78(Vec4 *);
extern int func_030AA8(void *,void *,void *,unsigned char,float,float,int,Vec4 *);
int func_030C50(void *a,void *b,void *c,int d,float f,float g,int e) {
    Vec4 v;
    unsigned char k=d;
    func_019F78(&v);
    return func_030AA8(a,b,c,k,f,g,e,&v);
}
