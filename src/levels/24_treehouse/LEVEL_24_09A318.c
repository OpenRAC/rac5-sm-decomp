/* LEVEL_24:09A318 -- publishes the two samples and raises the ready flag. */
extern float D_001C7390[];
extern unsigned char D_001C73A0;
void func_09A318(float f12, float f13)
{
    D_001C73A0 = 1;
    D_001C7390[0] = f12;
    D_001C7390[1] = f13;
}
