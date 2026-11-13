/*
 * Byte-exact under gnu-ee-trial. Requires the associated caller prototype
 * corrections before integration.
 */
typedef struct { float x,y,z,w; } Vec4;
extern void func_01A2A0(Vec4 *);
extern int func_031028(void *,void *,void *,unsigned char,float,float,int,Vec4 *);
int func_0311D0(void *a,void *b,void *c,int d,float f,float g,int e) {
    Vec4 v;
    unsigned char k=d;
    func_01A2A0(&v);
    return func_031028(a,b,c,k,f,g,e,&v);
}
