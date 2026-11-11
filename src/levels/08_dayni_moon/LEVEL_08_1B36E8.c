/* LEVEL_08:0x1B36E8 -- sets up a series of effect parameters for an object. */
extern void func_040EE0(int a);
extern void func_003400(float a, float b);
extern void func_003C58(void);
extern void func_003C08(int a);
extern void func_003190(int a, float b, int c);
extern void func_003718(float a, float b, int c, int d);
extern void func_003748(float a, float b, int c, int d);
extern void func_0038B8(float a, float b, int c, int d);
extern void func_003778(float a, float b, int c, int d);
extern void func_003868(float a, float b, int c, int d);

void func_1B36E8(int obj)
{
    func_040EE0(1);
    func_003400(0.0f, 0.0f);
    func_003C58();
    func_003C08(0);
    func_003190(obj, 0.0f, 1);
    func_003718(13.0f, 1.0f, 100, 3);
    func_003748(2.0f, 1.0f, 100, 3);
    func_0038B8(0.8625f, 1.0f, 100, 3);
    func_003778(1.5707964f, 1.0f, 100, 3);
    func_003868(0.0f, 1.0f, 100, 3);
}
