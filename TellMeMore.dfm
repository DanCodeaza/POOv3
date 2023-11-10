object TellMeMoreForm: TTellMeMoreForm
  Left = 0
  Top = 0
  Caption = 'TellMeMoreForm'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 56
    Top = 48
    Width = 499
    Height = 150
    Caption = 
      'Carbon dioxide (CO2) is a colorless, odorless gas vital to the E' +
      'arth'#39's atmosphere. Comprising one carbon atom and two oxygen ato' +
      'ms, it functions as a greenhouse gas, trapping solar heat to mai' +
      'ntain the planet'#39's temperature. Human activities, notably the bu' +
      'rning of fossil fuels and deforestation, have substantially incr' +
      'eased CO2 concentrations, contributing to global warming and cli' +
      'mate change. This heightened level leads to environmental reperc' +
      'ussions such as altered weather patterns, more intense heatwaves' +
      ', rising sea levels, and ecological disruptions. Recognizing the' +
      ' urgency, global initiatives focus on transitioning to renewable' +
      ' energy, enhancing energy efficiency, and adopting sustainable p' +
      'ractices to mitigate CO2 emissions. Technologies like carbon cap' +
      'ture and storage (CCS) also play a role in reducing CO2 releases' +
      ', as society strives for a more sustainable and resilient future' +
      '.'
    WordWrap = True
  end
  object Exit: TButton
    Left = 536
    Top = 392
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = ExitClick
  end
  object Previous: TButton
    Left = 440
    Top = 392
    Width = 75
    Height = 25
    Caption = 'Previous'
    TabOrder = 1
    OnClick = PreviousClick
  end
end
