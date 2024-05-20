Crear una aplicación que inicie con un login validando el usuario admin:123
Luego de ingresar el usuario válido, mostrar un nuevo QWidget con las siguientes características:
Definida en la clase Editor
Contendrá un QTextEdit vacío, un QLineEdit, un QPushButton "Buscar" y un QLabel
El usuario podrá escribir cualquier texto en el QTextEdit.
EL usuario podrá escribir también en el QLineEdit un caracter, una cadena o una frase.
Al presionar "Buscar" se detectará automáticamente la cantidad de ocurrencias encontradas de los que se escribió en el QLineEdit.
El resultado de colocará en el QLabel, indicando, por ejemplo, "14 ocurrencias."
Luego de dejar funcionando lo anterior, agregar lo siguiente:
Un QLineEdit y un QPushButton "Guardar"
En este QLineEdit el usuario puede colocar el nombre de un archivo .txt
Al presionar Guardar se almacenará todo el texto del QTextEdit en este archivo .txt
