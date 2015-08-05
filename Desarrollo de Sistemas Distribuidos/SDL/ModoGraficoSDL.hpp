/*
	IPN - ESCOM
	Desarrollo de Sistemas Distribuidos
	4CM1

	Equipo 5
	=> Ortega Ortuño Eder

	multiaportes.com/sistemasdistribuidos
*/

#include <SDL2/SDL.h>

class ModoGraficoSDL
{
	public:
		ModoGraficoSDL();
		~ModoGraficoSDL();
		void iniciar(const char *, int, int, int, int, int);
		void limpiarRender();
		void actualizar();
		void manejarEventos();
		void limpiar();
		bool correr();
		bool multiaportesMensajeError(const char *);
		SDL_Renderer *getRenderizador();
	private:
		bool init(const char *, int, int, int, int, int);
		bool corriendo;
		SDL_Window *ventana;
		SDL_Renderer *renderizador;
};
