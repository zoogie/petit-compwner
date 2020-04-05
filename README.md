# petit-compwner

## Intro

This is a new primary exploit for Petit Computer v2.2, US only. 2.2 is the only US version.<br>
All other regions are patched on their latest versions.<br>
This game is not available on the eshop anymore, although it was available on both the 3ds and DSi shops at one point.<br>

## Directions 

Just scan the [5 QRs](https://github.com/zoogie/petit-compwner/releases) in Petit Computer's File Management menu option, then run the program "PWN".<br>
(make sure to have a boot.nds on the SD root)


## Exploit 

The last string argument of interpreter command "COLSET" is not bounds checked, thus a trivial stack smash can occur if the string is overly long.

## Q&A 

Q: How is this useful?<br>
A: If you only have Petit on the DSi, not very. Memory Pit is a more convenient exploit and it's installed on every DSi.<br>
It's a different ballgame with the 3ds though. If you're lucky enough to have it on 3ds, you have a very quick path to full CFW<br>
given you can run b9sTool right after triggering the exploit. <br>

Q: I have it on DSi, but not 3ds. Can I transfer it?<br>
A: You sure can. It might be a better option to just use the slower seedminer CFW chain (or more expensive ntrboot method) as you can just keep Petit on your DSi.<br>
However, if fast and easy is your thing, you can transfer the app by itself and have at it.<br>

Q: So, about that 3ds cfw stuff, how do I do that?<br>
A: (Note: consider these directions unofficial and developer-only. If you break your 3ds, not my fault)<br>
1. Get b9sTool from [here](https://github.com/zoogie/b9sTool/releases) and put it on your SD card root (or first folder when you open the SD card)<br>
Be careful to ONLY use the b9sTool version that supports YOUR 3ds firmware.<br>
2. Get luma3ds from [here](https://github.com/AuroraWright/Luma3DS/releases) and also put that on your 3ds SD card root as well.<br>
3. Run petit compwner and select Install Boot9strap after b9sTool launches.<br>
That's it. You have cfw.<br>

Q: You mentioned, "patched on their latest versions". So what other versions are exploitable?<br>
A: Japan has some older versions that are exploitable but I doubt it's worth it to support these given their relative rarity.<br>
These would include:<br>
Puchikon mkII - 2.1 and 2.0<br>
Puchikon - all versions<br>
The Puchikon mkII versions are similar to Petit Computer in the west, and the original Puchikon is like a prequel to Petit Computer.<br>
The main difference of Puchikon is that it doesn't have a QR reading function (so it would be REALLY hard to support as a primary).<br>
If someone wants to take up supporting these older versions, be my guest. The project is open source.

Q: What is that thing in the bottom right corner that looks like a Missingno?<br>
A: That's Missingno's cousin :p But really, it's miniTwlPayload (the boot.nds loader), which is displayed on screen since it's loaded into VRAM
from the GRP graphics file I embedded it in.

Q: Cool, so what do I download?<br>
A: You don't download anything here. The Release tab has the QRs to scan. Have fun.<br>

## Thanks 

- ChampionLeake for testing
- Fincs for miniTwlPayload
- The app's dev for documenting the bug on their website