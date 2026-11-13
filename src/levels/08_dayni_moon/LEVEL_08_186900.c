/* LEVEL_08:0x186900 -- placement copy of LEVEL_04_17B240.c. */
/* Apply the directional effect to a live object. */
typedef struct Vec3 { float x,y,z; } Vec3;
extern unsigned char D_0026BBF0[];
extern void func_20DD10(unsigned char *,void *,void *,const Vec3 *,int);
static inline void scale_vector(Vec3 *out,const Vec3 *in,float scale)
{
    out->x=in->x*scale; out->y=in->y*scale; out->z=in->z*scale;
}
void func_186900(unsigned char *object)
{
    if (object) {
        void *data=*(void **)(object+0x58);
        Vec3 vector;
        scale_vector(&vector,(Vec3 *)(object+0x20),-0.34202015399932861328125f);
        vector.y=0.93969261646270751953125f;
        func_20DD10(object,data,D_0026BBF0,&vector,-1);
    }
}
