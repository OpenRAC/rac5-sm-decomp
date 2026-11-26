/* Boot 0x01E910C0 -- flushes the sound command queue, waiting 5 ms between tries, for at most `retries` rounds; returns 1 when drained, 0 on timeout. */
extern int snd_FlushSoundCommands(void);
extern void DelayThread(int microseconds);

int SND_FlushAndSync__FUi(unsigned int retries)
{
    if (retries == 0)
        retries++;
    while (snd_FlushSoundCommands() != 0) {
        DelayThread(5000);
        if (--retries == 0)
            return 0;
    }
    return 1;
}
