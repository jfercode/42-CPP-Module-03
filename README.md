# 🔁 CPP Module 03 – Herencia Múltiple, Clases Abstractas y Polimorfismo

> ✅ Objetivo: Comprender y aplicar **polimorfismo en tiempo de ejecución**, **destructores virtuales** y **herencia múltiple**
> ✅ Nivel: Intermedio-Avanzado
> ✅ Temas clave: clases base, métodos virtuales, constructores en herencia, slicing, comportamiento dinámico

---

## 📚 Tabla de Contenidos

1. [Clases Base y Derivadas](#-1-clases-base-y-derivadas)
2. [Métodos Virtuales y Overriding](#-2-métodos-virtuales-y-overriding)
3. [Destructores Virtuales](#-3-destructores-virtuales)
4. [Clases Abstractas y Métodos Puros](#-4-clases-abstractas-y-métodos-puros)
5. [Herencia Múltiple](#-5-herencia-múltiple)
6. [Object Slicing](#-6-object-slicing)
7. [Errores Comunes](#-7-errores-comunes)
8. [Buenas Prácticas](#-8-buenas-prácticas)

---

## 🔹 1. Clases Base y Derivadas

📘 **¿Qué es?**
Una clase derivada **hereda** atributos y métodos de otra clase base.

```cpp
class Animal {
public:
    void respirar() const {
        std::cout << "Respirando..." << std::endl;
    }
};

class Perro : public Animal {
public:
    void ladrar() const {
        std::cout << "Guau!" << std::endl;
    }
};
```

🎯 Se utiliza para modelar relaciones tipo "es-un".

---

## 🔹 2. Métodos Virtuales y Overriding

📘 **¿Qué es?**
Un método virtual se puede **redefinir** en una clase derivada y ejecutará el método correcto en tiempo de ejecución.

```cpp
class Animal {
public:
    virtual void hablar() const {
        std::cout << "Hace un sonido" << std::endl;
    }
};

class Gato : public Animal {
public:
    void hablar() const override {
        std::cout << "Miau!" << std::endl;
    }
};
```

🧪 **Uso:**

```cpp
Animal* a = new Gato();
a->hablar(); // Llama a Gato::hablar() gracias al virtual
```

🎯 Sin `virtual`, llamaría a `Animal::hablar()` aunque sea un `Gato`.

---

## 🔹 3. Destructores Virtuales

📘 **¿Por qué importa?**
Para evitar fugas de memoria al eliminar objetos derivados desde punteros base.

```cpp
class Base {
public:
    virtual ~Base() {
        std::cout << "Destruyendo Base" << std::endl;
    }
};

class Derivada : public Base {
public:
    ~Derivada() {
        std::cout << "Destruyendo Derivada" << std::endl;
    }
};
```

🧪 **Uso correcto:**

```cpp
Base* obj = new Derivada();
delete obj; // Llama a ~Derivada y luego a ~Base
```

🎯 Siempre haz el destructor base **virtual** si hay herencia.

---

## 🔹 4. Clases Abstractas y Métodos Puros

📘 **¿Qué es?**
Una **clase abstracta** tiene al menos un **método puro virtual** y **no se puede instanciar**.

```cpp
class Forma {
public:
    virtual void dibujar() const = 0; // Método puro
};
```

🎯 Las subclases deben implementar `dibujar()`.

```cpp
class Circulo : public Forma {
public:
    void dibujar() const override {
        std::cout << "Dibujo un círculo" << std::endl;
    }
};
```

🧪 **Uso:**

```cpp
Forma* f = new Circulo();
f->dibujar(); // Dibujo un círculo
```

---

## 🔹 5. Herencia Múltiple

📘 **¿Qué es?**
Una clase puede heredar de **más de una** base.

```cpp
class Volador {
public:
    void volar() const {
        std::cout << "Volando..." << std::endl;
    }
};

class Cantante {
public:
    void cantar() const {
        std::cout << "Cantando!" << std::endl;
    }
};

class Pajaro : public Volador, public Cantante {};
```

🧪 **Uso:**

```cpp
Pajaro p;
p.volar();
p.cantar();
```

🎯 Ten cuidado con **ambigüedad de nombres** si dos clases base tienen el mismo método.

---

## 🔹 6. Object Slicing

📘 **¿Qué es?**
Cuando asignas una clase derivada a una variable de clase base **por valor**, se pierde la parte derivada.

```cpp
class A {
public:
    virtual void foo() const {
        std::cout << "A::foo" << std::endl;
    }
};

class B : public A {
public:
    void foo() const override {
        std::cout << "B::foo" << std::endl;
    }
};

A a = B(); // slicing: B → A
a.foo();   // A::foo, NO B::foo
```

🎯 Solución: siempre usa punteros o referencias para objetos polimórficos.

---

## 🔹 7. Errores Comunes

❌ Olvidar `virtual` en métodos y destructores
❌ Object slicing: pasar clases por valor
❌ Intentar instanciar una clase abstracta
❌ Herencia múltiple con ambigüedad no resuelta
❌ No usar `override`, lo que puede ocultar errores sutiles

---

## 🔹 8. Buenas Prácticas

✅ Marca destructores como `virtual` en clases base
✅ Usa `override` para métodos redefinidos
✅ Evita herencia múltiple salvo cuando sea realmente necesario
✅ Usa punteros/referencias para evitar slicing
✅ Marca clases como `abstractas` si solo sirven de interfaz

---

## Autor 🤝💡📬

<div align="center">
  <tr>
	<td align="center">
	  <a href="https://github.com/jfercode">
	   <img src="https://github.com/jfercode.png" width="100px" alt="Javier Fernández Correa" />
		<br />
		<sub><b>Javier Fernández Correa</b></sub>
	  </a>
</div>


## Licencia 📜✅🗝️

Este proyecto está bajo la licencia MIT. ⚖️📄🆓
