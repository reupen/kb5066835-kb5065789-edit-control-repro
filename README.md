# KB5066835 and KB5065789 Win32 edit control breakage repro

This project is a simple repro for how KB5065789 and KB5066835 breaks multiline Win32 
edit controls in tabbed dialogue boxes that use `EnableThemeDialogTexture()` with the
`ETDT_ENABLETAB` flag (something that has worked for decades).

https://github.com/user-attachments/assets/3e9d41eb-3516-458a-9965-a696c44601ac