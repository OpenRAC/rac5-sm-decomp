/* LEVEL_08:0x0589B0 -- primes the four fade channels. */
extern void func_040F08(void *obj);
extern void func_003718(int, int, float, float);
extern void func_003748(int, int, float, float);
extern void func_0038B8(int, int, float, float);
extern void func_003C30(int);

void func_0589B0(char *state)
{
    func_040F08(state);
    func_003718(0xA, 2, 6.0f, 1.0f);
    func_003748(0xA, 2, 3.0f, 1.0f);
    func_0038B8(0xA, 2, -0.3f, 1.0f);
    func_003C30(0);
}
