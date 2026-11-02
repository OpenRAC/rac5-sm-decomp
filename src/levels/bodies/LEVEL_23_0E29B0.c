typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00301A2C[];
extern void func_0E2848(Entry *entry);

void func_0E29B0(unsigned int index) {
    func_0E2848(&D_00301A2C[index]);
}
