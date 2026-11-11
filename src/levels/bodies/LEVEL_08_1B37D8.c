/* LEVEL_08:0x1B37D8 -- resets the stage and queues five timed ramps. */
extern void func_040EE0(int a);
extern void func_003400(float a, float b);
extern void func_003C58(void);
extern void func_003C08(int a);
extern void func_003190(int o, float f, int a);
extern void func_003778(int id, int a, float x, float y);
extern void func_003718(int id, int a, float x, float y);
extern void func_003748(int id, int a, float x, float y);
extern void func_003868(int id, int a, float x, float y);
extern void func_0038B8(int id, int a, float x, float y);

void func_1B37D8(int o)
{
    func_040EE0(1);
    func_003400(0.0f, 0.0f);
    func_003C58();
    func_003C08(0);
    func_003190(o, 0.0f, 0);
    func_003778(100, 0, 1.5707963705062866f, 1.0f);
    func_003718(100, 0, 13.0f, 1.0f);
    func_003748(100, 0, 7.0f, 0.1666666716337204f);
    func_003868(100, 0, 0.0f, 1.0f);
    func_0038B8(100, 0, 0.0f, 0.1666666716337204f);
}
