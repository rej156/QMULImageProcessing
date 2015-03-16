class BasicApplication : public wxApp {
 public:
    virtual bool OnInit();
};


class MyFrame : public wxFrame {
 protected:
    wxMenuBar  *menuBar;//main menu bar
    wxMenu     *fileMenu;//file menu
    wxMenu     *fileMenuw;//file menu
    wxMenu     *fileMenuq;//file menu
    wxMenu     *fileMenue;//file menu
    wxBitmap *back_bitmap; // offscreen memory buffer for drawing
    wxToolBar *toolbar;//tollbar not necessary to use
    wxImage *loadedImage2;
    int oldWidth, oldHeight; // save old dimensions
    wxBitmap bitmap;  //structure for the edited image
    wxImage *loadedImage; // image loaded from file
    int imgWidth, imgHeight; // image dimensions
    int stuffToDraw;
   /* declear message handler */
    void OnInvertImage(wxCommandEvent & event);
    void OnScaleImage(wxCommandEvent & event);
    void UndoImage(wxCommandEvent & event);
    void Rescale(wxCommandEvent & event);
    void Shifting(wxCommandEvent & event);
    void Averaging(wxCommandEvent & event);
    void Weighted(wxCommandEvent & event);
    void FLaplacian(wxCommandEvent & event);
    void FLaplacianE(wxCommandEvent & event);
    void ELaplacian(wxCommandEvent & event);
    void ELaplacianE(wxCommandEvent & event);
    void Roberts(wxCommandEvent & event);
    void Sobelx(wxCommandEvent & event);
    void Sobely(wxCommandEvent & event);
    void SaltandPepperFiltering(wxCommandEvent & event);
    void MinFiltering(wxCommandEvent & event);
    void MidFiltering(wxCommandEvent & event);
    void MaxFiltering(wxCommandEvent & event);
    void MedFiltering(wxCommandEvent & event);
    void Negative(wxCommandEvent & event);
    void Logarithmic(wxCommandEvent & event);
    void PowerLaw(wxCommandEvent & event);
    void RandomLookUp(wxCommandEvent & event);
    void FindHistogram(wxCommandEvent & event);
    void OnSaveImage(wxCommandEvent & event);
    void OnMyFunctionImage(wxCommandEvent & event); //---> To be modified!
 public:
    MyFrame(const wxString title, int xpos, int ypos, int width, int height);
    virtual ~MyFrame();
    void OnExit(wxCommandEvent & event);
    void OnOpenFile(wxCommandEvent & event);
    void OnPaint(wxPaintEvent & event);

    DECLARE_EVENT_TABLE()

};

enum { NOTHING = 0,
       ORIGINAL_IMG,
};

enum { EXIT_ID = wxID_HIGHEST + 1,
       LOAD_FILE_ID,
       INVERT_IMAGE_ID,
       SCALE_IMAGE_ID,
       SAVE_IMAGE_ID,
       UNDO_IMAGE_ID,
       RESCALE_IMAGE_ID,
       SHIFTING_IMAGE_ID,
       AVERAGING_IMAGE_ID,
       WEIGHTED_IMAGE_ID,
       FLAPLACIAN_IMAGE_ID,
       ELAPLACIAN_IMAGE_ID,
       FLAPLACIANE_IMAGE_ID,
       ELAPLACIANE_IMAGE_ID,
       ROBERTS_IMAGE_ID,
       SOBELX_IMAGE_ID,
       SOBELY_IMAGE_ID,
       SALTANDPEPPER_IMAGE_ID,
       MINFILTERING_IMAGE_ID,
       MAXFILTERING_IMAGE_ID,
       MIDPOINTFILTERING_IMAGE_ID,
       MEDIANFILTERING_IMAGE_ID,
       NEGATIVE_IMAGE_ID,
       LOGARITHMIC_IMAGE_ID,
       POWERLAW_IMAGE_ID,
       RANDOMLOOKUP_IMAGE_ID,
       ROI_IMAGE_ID,
       HISTOGRAM_IMAGE_ID,
};
