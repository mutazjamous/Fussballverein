class CVeriein {
public:
    bool add(const CFuehrung& ein_arg);

    bool add(const CKader& ein_arg);

    void print();

private:
    CKader* pMyKader;
    unsigned int anzFuehrung;
    CFuehrung* fuehrungMitglieder[20];
};
