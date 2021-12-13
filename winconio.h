#ifndef WINCONIO_H_INCLUDED
#define WINCONIO_H_INCLUDED

#define BUFFSIZE 2048
enum COLORS
{
    BLACK,          /* dark colors */
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    DARKGRAY,       /* light colors */
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW,
    WHITE
};

#ifdef __cplusplus
extern "C"
{
#endif

    //!< ������� � �������� ���������� � �������
    void GotoXY(int __x, int __y);

    //!< �������� ������� X ���������� �������
    int WhereX();

    //!< �������� ������� Y ���������� �������
    int WhereY();

    //!< ���������� �������� (���� ������ � ����) �������� ��� ������
    void TextAttr(int __newattr);

    //!< ���������� ���� ������ �������� ��� ������
    void TextColor(int __newcolor);

    //!< ���������� ���� ���� �������� ��� ������
    void TextBackground(int __newcolor);

    //!< ��������� �����
    void ClearConsole();

    //!< ���������� ������ ����������� ���� (�� ��������� 80 �� 25)
    void SetConsoleWindowSize(int weigth = 80, int height = 25);

    //!< ���������� ������ ������ (�������) ����������� ����
    void SetConsoleCursorSize(unsigned long percent = 1, bool visible = false);

#ifdef __cplusplus
}
#endif

#endif // WINCONIO_H_INCLUDED
