extern char *func_08F7C8(char *data);
extern unsigned short *func_08F7E8(char *data, unsigned int type, int ordinal);

void sceGimPictureGetChunk__FPCvii(char *first, long long second, int third)
{
    func_08F7E8(func_08F7C8(first), 3, third);
}
