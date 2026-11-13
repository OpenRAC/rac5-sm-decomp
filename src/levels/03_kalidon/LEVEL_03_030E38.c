/* LEVEL_03:0x030E38 -- placement copy of LEVEL_01_0311D0.c. */
typedef struct { float x,y,z,w; } Vec4;
extern void func_01A0B0(Vec4 *);
extern int func_030C90(void *,void *,void *,unsigned char,float,float,int,Vec4 *);
int func_030E38(void *a,void *b,void *c,int d,float f,float g,int e) {
    Vec4 v;
    unsigned char k=d;
    func_01A0B0(&v);
    return func_030C90(a,b,c,k,f,g,e,&v);
}
