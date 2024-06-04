Definir un formulario en la clase Formulario usando QtDesigner.
En Formulario se darán de alta instrumentos en un negocio de instrumentos musicales.
Los instrumentos que se pueden cargar serán: guitarras, vientos y teclados.
Definir las clases Instrumento, Guitarra, Viento y Teclado.
Cada clase en sus correspondientes archivos .h y .cpp
Instrumento será una clase abstracta con la función virtual pura void afinar()
Que esa función virtual pura simplemente publique un texto por consola, por ejemplo "Afinando guitarra".
El formulario tendrá un botón que agregará un instrumento nuevo a un QVector< Instrumento * >
El formulario tendrá un QComboBox en el cual tendrá el siguiente listado: Guitarra, Viento y Teclado.
El formulario también tendrá un botón "Ver stock" que publicará por consola todos los instrumentos cargados.
Los Instrumentos tendrán los siguientes atributos: marca, precio, cantidad_de_cuerdas, cantidad_de_teclas, metal_usado.
Cuando en el QComboBox se seleccione Guitarra, se deberá permitir ingresar sólo la marca, el precio y la cantidad de cuerdas.
