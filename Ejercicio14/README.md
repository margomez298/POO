Diseñar un login con QGridLayout.
* Usar asteriscos para la clave.
* Detectar enter para simular la pulsación del botón.
* Definir la clase Formulario que será un QWidget
* Formulario tendrá QLabels y QLineEdits para Legajo, Nombre y Apellido, y un QPushButton
* Si la clave ingresada es admin:1111, se cierra Login y se muestra Formulario
* Si se ingresa otra clave se borrará el texto del QLineEdit de la clave.
------------------------------------------------------------------------
(continuación):
* Publicar en la ventana de Login, la temperatura actual en la Ciudad de Córdoba. Usar alguna API disponible.
* Agregar un método en Login que permita mostrar u ocultar la información de la temperatura.
* Además que la ventana de Login tenga como background una imagen descargada de interner, centrada y adaptada en tamaño, sin deformar su aspecto y que permita al usuario que modifique el tamaño del Login y que se siga viendo correctamente la imagen.
* Agregar un método en Login que permita indicar la URL de la imagen que se mostrará en el background. En caso que nunca se invoque a este método, ninguna imagen se mostrará.
-------------------------------------------------------------------------
(continuación):
* Agregar la siguiente característica a Login: Si el usuario falla 3 veces la clave, bloquear por 5 minutos a ese usuario.
-----------------------------------------------------------------------
(continuación):
* Incorporar la validación de usuarios con QSLite.
* Todo lo que se haga con la base de datos, que se encuentre en la clase AdminDB
* Pueden utilizar SQLiteStudio (https://sqlitestudio.pl) o similar.
----------------------------------------------------------------------
(continuación):
* Implementar en AdminDB el uso de MD5 para las claves de los usuarios.
* Acondicionar para que el método utilizado sea el siguiente:
![image](https://github.com/margomez298/POO/assets/108554513/5362351e-3378-43f2-8b81-6309d0af11c4)

* Además, definir un método en AdminDB para ejecutar un select a la base. El prototipo es el siguiente:
![image](https://github.com/margomez298/POO/assets/108554513/96fb3699-6aad-4c66-828c-b8267c91b6eb)
* Definir en Login una signal que se emita cada vez que un usuario se loguee exitosamente. La signal debe emitir el nombre de usuario.
![image](https://github.com/margomez298/POO/assets/108554513/c3af9d8a-bc84-4328-bf5b-1d7202ea3514)


