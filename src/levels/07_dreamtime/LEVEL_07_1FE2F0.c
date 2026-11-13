/* Wraps the updated angle into [-pi, pi). Exact with pinned -fno-expensive-optimizations; default CSE retains a constant across fmodf. */
extern float fmodf(float,float);
void func_1FE2F0(float *o,float delta)
{
 float x;
 o[7]+=delta;
 x=fmodf(o[7],6.283185482025146484375f);
 if(x < -3.1415927410125732421875f)x+=6.283185482025146484375f;
 else if(x>=3.1415927410125732421875f)x-=6.283185482025146484375f;
 o[7]=x;
}
