#ifndef CARRO_H
#define CARRO_H


class Carro
{
public:
    Carro();
    QString nome;
    QString getNome() const;
    void setNome(const QString &value);
};

#endif // CARRO_H
